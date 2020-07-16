#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *msg;
char *reply;
int  *failed_nodes;
int N;
int B;
int F;

static int solve(int N, int B, int F);

struct node {
	int n_size;
	int n_msg_start;
	int n_msg_end;
	int n_failures;
	int n_reply_start;
	int n_reply_end;
	int n_rank;

	struct node *n_left;
	struct node *n_right;
};

static struct node * node_create(int n_size, int n_msg_start, int n_msg_end,
				 int n_failures, int reply_start, int reply_end) {

	struct node *node;

	node = malloc(sizeof node[0]);
	node->n_size = n_size;
	node->n_msg_start = n_msg_start;
	node->n_msg_end = n_msg_end;
	node->n_failures = n_failures;
	node->n_reply_start = reply_start;
	node->n_reply_end = reply_end;
	/* Location in message array is same as the rank. */
	node->n_rank = n_msg_start;
	node->n_left = NULL;
	node->n_right = NULL;
	return node;
}

static int is_leaf(struct node *node)
{
        return node->n_left == NULL && node->n_right == NULL;
}

static void msg_prepare(struct node* node)
{
	int ones  = node->n_size == 1 ? 1 : node->n_size / 2;
	int zeros = node->n_size - ones;
	int i;

	if (node->n_left != NULL)
		msg_prepare(node->n_left);
	if (node->n_right != NULL)
		msg_prepare(node->n_right);
	if (!is_leaf(node))
		return;
	for (i = node->n_msg_start; i < node->n_msg_start + ones; ++i) {
		msg[i] = '1';
	}
        for (; i <= node->n_msg_end; ++i) {
                msg[i] = '0';
        }
}

static int ones_calculate(char *reply, int start, int end)
{
        int cnt = 0;
        int i;

        for (i = start; reply[i] != '0' && i < end + 1; ++i)
                ++cnt;
        return cnt;
}

static int zeros_calculate(char *reply, int start, int end)
{
        int cnt = 0;
        int i;

	// Skip '1's
	for (i = start; reply[i] == '1'; ++i);

	// Entire reply can not contain 1's as we have not sent so.
        for (; reply[i] == '0' && i < end + 1; ++i)
                ++cnt;
        return cnt;
}

static void reply_process(char* reply, struct node *node)
{
        int errors_left;
        int errors_right;
        int ones_cnt;
        int zero_cnt;

        if (node->n_left != NULL)
                reply_process(reply, node->n_left);
        if (node->n_right != NULL)
                reply_process(reply, node->n_right);
        if (!is_leaf(node)) {
                return;
	}

        ones_cnt     = ones_calculate(reply, node->n_reply_start,
				      node->n_reply_end);
        zero_cnt     = zeros_calculate(reply, node->n_reply_start,
					node->n_reply_end);
        errors_left  = node->n_size / 2 - ones_cnt;
        errors_right = node->n_size - node->n_size / 2 - zero_cnt;

	// Handle the special case of n_size == 1;
	if (node->n_size == 1) {
		// This node is down.
		printf("size: %d\t", node->n_size);
		if (ones_cnt == 0)
			failed_nodes[node->n_rank] = 1;
		return;
	}

	if (node->n_size == 2) {
		if (errors_left) {
			failed_nodes[node->n_rank] = 1;
			printf("\nfailure marked");
		}
		if (errors_right) {
			failed_nodes[node->n_rank + 1] = 1;
			printf("\nfailure marked");
		}
		return;
	}
#if 1
	if (node->n_size  == 3) {
		if (ones_cnt == 0)
			failed_nodes[node->n_rank] = 1;
		if (zero_cnt == 0) {
			failed_nodes[node->n_rank + 1] = 1;
			failed_nodes[node->n_rank + 2] = 1;
		}
		return;
	}
#endif
	// if n_size == 2 handle specially.
	node->n_left = node_create(node->n_size / 2, node->n_msg_start,
				   node->n_msg_start + node->n_size / 2 -1,
				   errors_left, node->n_reply_start,
				   node->n_reply_start + ones_cnt - 1);
	// if n_size == 3 handle specially.
	node->n_right = node_create(node->n_size - node->n_size / 2,
				    node->n_msg_start + node->n_size / 2,
				    node->n_msg_end,
				    errors_right,
				    node->n_reply_start + ones_cnt,
				    node->n_reply_end);
}

/** Recursively prunes descendants. */
static void node_destroy(struct node *node) {
	if (node->n_left != NULL)
		node_destroy(node->n_left);
	if (node->n_right != NULL)
		node_destroy(node->n_right);
	free(node);
}

int main() {
  int T;
  int id;

  scanf("%d", &T);

  for (id = 1; id <= T; ++id) {
	  int rc;

	  scanf("%d %d %d", &N, &B, &F);
	  rc = solve(N, B, F);
	  if (rc != 1)
		  break;
  }
  return 0;
}

static int failures_count(void)
{
	int i;
	int cnt = 0;

	for (i = 0; i < N; ++i) {
		if (failed_nodes[i] == 1)
			++cnt;
	}
	return cnt;
}

static int solve(int N, int B, int F) {


	int i;
	struct node *root;
	int faults;

	/* Don't bother for -ENOMEM. */
	root = node_create(N, 0, N - 1, B, 0, N - B -1);
	msg = calloc((N + 1), sizeof msg[0]);
	reply = calloc((N - B + 1),  sizeof reply[0]);
	failed_nodes = calloc(N, sizeof failed_nodes[0]);
	msg[N] ='\0';
	reply[N - B] = '\0';

	// One more termination condition is needed.
	for (i = 0; i < F; ++i) {
		msg_prepare(root);
		printf("%s\n", msg);
		fflush(stdout);
		printf("i: %d\n", i);
		scanf("%s", reply);
		reply_process(reply, root);
		faults = failures_count();
		if (faults == B)
			break;
	}
	printf("\nfaults = %d", faults);
	for (i = 0; i < N; ++i) {
		if (failed_nodes[i] == 1)
			printf("\n%d", i);
	}
	printf("\n");

//	failed_nodes = string_prepare(failures);
//	printf("%s\n", failed_nodes);
//	scanf("%d", &result);

	free(failed_nodes);
	free(reply);
	free(msg);
	node_destroy(root);
        return 0;
//	return result;
}
