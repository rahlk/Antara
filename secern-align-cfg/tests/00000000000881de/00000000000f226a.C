#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define D 1026

int pow_2[5] = {16, 8, 4, 2, 1};
char mask[5][D], resp[5][D];

int constraint_coef[5][16] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0},
    {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
};
int constraint_num[5];
int constraint_start_id;
int iter_var_selected[16], iter_var_selected_cache[16];
int iter_var_num, iter_max_selected, iter_stopped,
    iter_resp_lower, iter_resp_upper, iter_seg_lower, iter_seg_upper;


void init_mask() {
    int i, j, flag, cnt;
    for(i=0; i<5; ++i) {
        for(j=0, flag=0, cnt=0; j<1024; ++j, ++cnt) {
            if(cnt == pow_2[i]) {
                cnt = 0;
                flag = 1 - flag;
            }
            mask[i][j] = (flag) ? '1' : '0';
        }
        mask[i][j] = 0;
    }
}

int send_queries(char resp[5][D], int n) {
    int i, query_num;
    char query[D];

    for(i=4; i>=0 && pow_2[i] < n; --i);
    query_num = 4 - i;

    query[n] = 0;
    for(i=5-query_num; i<5; ++i) {
        strncpy(query, mask[i], n);
        printf("%s\n", query);
        fflush(stdout);
        scanf("%s", resp[i]);
    }

    return query_num;
}

int count_errors_in_segments(int errors_in_seg[64], int n, int b, int query_num, char resp[5][D]){
    int i, j, k, len, flag, cnt, r;
    char target[3] = "01";

    if(n < 16) {
        errors_in_seg[0] = b;
        return 1;
    }

    for(i=5-query_num, j=0, k=0, len=n-b, flag=0, cnt=0; j<len; ++j, ++cnt) {
        if(resp[i][j] != target[flag]) {
            errors_in_seg[k++] = 16 - cnt;
            cnt = 0;
            flag = 1 - flag;
        }
    }
    r = n % 16;
    errors_in_seg[k++] = ((r == 0) ? 16 : r) - cnt;

    return k;
}

int count_target_in_substr(char* str, int lower, int upper, char target) {
    int i, ret;
    for(i=lower, ret=0; i<upper; ++i)
        ret += (str[i] == target);
    return ret;
}

void _iterate_set(int start, int now_selected) {
    int i, j, k, v, limit, sum;

    if(now_selected == iter_max_selected) {
        for(i=constraint_start_id; i<5; ++i) {
            for(j=0, sum=0; j<iter_var_num; ++j)
                sum += constraint_coef[i][j] * iter_var_selected[j];
            if(sum != constraint_num[i])
                return;
        }
        for(i=constraint_start_id; i<5; ++i) {
            for(j=iter_seg_lower, k=iter_resp_lower, v=0; v<iter_var_num; ++v) {
                if(iter_var_selected[v]) {
                    ++j;
                } else if(mask[i][j++] != resp[i][k++]) {
                    return;
                }
            }
        }
        iter_stopped = 1;
        memcpy(iter_var_selected_cache, iter_var_selected, sizeof(int) * iter_var_num);
        return;
    }

    for(i=start, limit=iter_var_num-(iter_max_selected-now_selected-1); i<limit && !iter_stopped; ++i) {
        iter_var_selected[i] = 1;
        _iterate_set(i+1, now_selected+1);
        iter_var_selected[i] = 0;
    }
}

void iterate_set(int var_num, int max_seleted,
                 int resp_lower, int resp_upper,
                 int seg_lower, int seg_upper) {
    iter_var_num = var_num;
    iter_max_selected = max_seleted;
    iter_resp_lower = resp_lower;
    iter_resp_upper = resp_upper;
    iter_seg_lower = seg_lower;
    iter_seg_upper = seg_upper;
    iter_stopped = 0;
    _iterate_set(0, 0);
}

void find_errors(int error_pos[16],
                 int query_num, int resp_lower, int resp_upper,
                 int error_num, int seg_lower, int seg_upper) {
    int i, j, var_num;

    var_num = seg_upper - seg_lower;
    constraint_start_id = (query_num == 5) ? 1 : (5 - query_num);
    for(i=constraint_start_id; i<5; ++i)
        constraint_num[i] = count_target_in_substr(mask[i], seg_lower, seg_upper, '0') - count_target_in_substr(resp[i], resp_lower, resp_upper, '0');

    iterate_set(var_num, error_num,
                resp_lower, resp_upper,
                seg_lower, seg_upper);

    error_pos[0] = -1;
    for(i=0, j=0; i<var_num; ++i) {
        if(iter_var_selected_cache[i]) {
            error_pos[j++] = seg_lower + i;
            error_pos[j] = -1;
        }
    }
}

void append_vector(int dest[16], int src[16]) {
    int i, j;
    for(i=0; i<15 && dest[i]!=-1; ++i);
    for(j=0; i<15 && j<15 && src[j]!=-1; ++j)
        dest[i++] = src[j];
    dest[i] = -1;
}

int send_answer(int vec[16]) {
    int i, resp;

    for(i=0; i<15 && vec[i]!=-1; ++i)
        printf((i) ? " %d" : "%d", vec[i]);
    printf("\n");
    fflush(stdout);
    scanf("%d", &resp);

    return resp;
}

void solve(int n, int b) {
    int query_num, seg_num, i, resp_len, resp_lower, resp_upper, seg_lower, seg_upper;
    int errors_in_seg[64], ans[16], error_pos[16];

    query_num = send_queries(resp, n);
    seg_num = count_errors_in_segments(errors_in_seg, n, b, query_num, resp);

    ans[0] = -1;
    resp_len = n - b;
    for(i=0, resp_lower=0, seg_lower=0; i<seg_num && resp_lower<n; ++i, resp_lower=resp_upper, seg_lower=seg_upper) {
        resp_upper = resp_lower + 16 - errors_in_seg[i];
        seg_upper = seg_lower + 16;
        if(resp_upper > resp_len) resp_upper = resp_len;
        if(seg_upper > n) seg_upper = n;
        if(errors_in_seg[i]) {
            find_errors(error_pos,
                        query_num, resp_lower, resp_upper,
                        errors_in_seg[i], seg_lower, seg_upper);
            append_vector(ans, error_pos);
        }
    }

    if(send_answer(ans) == -1)
        exit(0);
}

int main() {
    int T, N, B;

    init_mask();
    scanf("%d", &T);
    while(T--) {
        scanf("%d %d %*d", &N, &B);
        solve(N, B);
    }
    return 0;
}
