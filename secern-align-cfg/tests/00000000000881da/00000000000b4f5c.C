#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct cell_t {
    int x, y;
    int south_cost;
    int east_cost;
    int dist;
    int visited;
    struct cell_t *prev;
} cell_t;

typedef struct node_t {
    cell_t *cell;
    struct node_t *next;
} node_t;

node_t *append(node_t *head, cell_t *cell) {
    if (head == NULL) {
        head = (node_t*) malloc(sizeof(node_t));
        head->cell = cell;
        head->next = NULL;
    } else {
        // Go to the end of the list
        node_t *current = head;
        while (current->next != NULL) {
            current = current->next;
        }

        node_t *temp = (node_t*) malloc(sizeof(node_t));
        temp->cell = cell;
        temp->next = NULL;
        current->next = temp;
    }

    return head;
}
node_t *remove_cell(node_t *head, cell_t *cell) {
    if (head == NULL) {
        return NULL;
    } else {
        // Store the current
        node_t *current = head;
        node_t *prev = NULL;

        while (current->cell->x != cell->x && current->cell->y != cell->y) {
            prev = current;
            current = current->next;
        }
        
        // Found the node to remove
        if (prev == NULL) {
            head = current->next;
        } else {
            prev->next = current->next;
        }
    }

    return head;
}

cell_t *find_min(node_t *head) {
    if (head == NULL) {
        return NULL;
    } else {
        int min_dist = INT_MAX;
        cell_t *min_cell = NULL;
        node_t *current_node = head;
        
        while (current_node != NULL) {
            if (current_node->cell->dist < min_dist) {
                min_dist = current_node->cell->dist;
                min_cell = current_node->cell;
            }
            
            current_node = current_node->next;
        }

        return min_cell;
    }
}

int main(int argc, char* argv[]) {

    // Scan test cases
    int t;
    scanf("%d", &t);

    // Looop through test cases
    int i;
    for (i=1;i<=t;i++) {
        int dimension;
        scanf("%d", &dimension);

        char *lydias_path;
        lydias_path = (char*) malloc((2 * dimension - 1) * sizeof(char));

        scanf("%s", lydias_path);

        // Initialise the map
        cell_t **map;
        map  = (cell_t**) malloc(dimension * sizeof(cell_t*));

        int j;
        for (j=0; j<dimension; j++) {
            map[j] = (cell_t*) malloc(dimension * sizeof(cell_t));
        }

        // Initialise the cells and add to the queue
        int x,y;
        node_t *queue_head = NULL;
        for (x=0; x<dimension; x++) {
            for (y=0; y<dimension; y++) {
                cell_t cell;
                cell.x = x;
                cell.y = y;
                cell.south_cost = 0;
                cell.east_cost = 0;
                cell.visited = 0;
                cell.dist = INT_MAX;
                cell.prev = NULL;
                map[x][y] = cell;

                queue_head = append(queue_head, &map[x][y]);
            }
        }

        map[0][0].dist = 0;

        // Go through lydia's path
        int c = 0;
        x = 0;
        y = 0;
        while (lydias_path[c] != '\0') {
            if (lydias_path[c] == 'E') {
                map[x][y].east_cost = INT_MAX;
                x++;
            } else if (lydias_path[c] == 'S') {
                map[x][y].south_cost = INT_MAX;
                y++;
            }

            c++;
        }

        while (queue_head != NULL) {
            cell_t *min = find_min(queue_head);

            // Remove the minimum from the list
            queue_head = remove_cell(queue_head, min);

            // Go east or south
            int direction;
            for (direction=0; direction<2; direction++) {
                int new_dist;
                int new_x = min->x;
                int new_y = min->y;
                // SOUTH
                if (direction == 0) {
                    if (min->south_cost == INT_MAX) {
                        continue;
                    }
                    new_dist = min->dist + min->south_cost;
                    new_y += 1;
                } else {
                    if (min->east_cost == INT_MAX) {
                        continue;
                    }
                    new_dist = min->dist + min->east_cost;
                    new_x += 1;
                }
                
                if (new_x >= dimension || new_y >= dimension) {
                    continue;
                }

                if (new_dist < map[new_x][new_y].dist) {
                    map[new_x][new_y].dist = new_dist;
                    map[new_x][new_y].prev = min;
                }
            }
        }

        // Get the target and backtrack
        cell_t **temp = (cell_t**) malloc(dimension * dimension * sizeof(cell_t*));

        int counter = 0;
        cell_t *node = &map[dimension - 1][dimension - 1];
        while (node->prev != NULL) {
            temp[counter] = node;

            node = node->prev;
            counter++;
        }

        temp[counter] = node;

        // Now go backwards and append the string
        char *output;
        output = (char*) malloc(2 * dimension * sizeof(char));
        int output_c = 0;
        for (; counter > 0; counter--) {
            cell_t *current = temp[counter];
            cell_t *next = temp[counter - 1];
            if (next->x > current->x) {
                output[output_c] = 'E';
            } else {
                output[output_c] = 'S';
            }

            output_c++;
        }
        output[output_c] = '\0';

        printf("Case #%d: %s\n", i, output);
    }

    return 0;
}