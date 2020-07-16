
  
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>
static void die(const char *msg)
{
    fprintf(stderr, "%s\n", msg);
    abort();
    exit(1);
}

#define MAXGRID 12000L
#define MAXLINE (MAXGRID * 2)
unsigned char g_grid[MAXGRID * MAXGRID];
int g_grid_sz = 0; 
char g_line[MAXLINE];





enum {
    ME = 1,
    RIVAL = 2,
    IMP_X = 4,
    IMP_Y = 8,
};
struct pos {
    int x;
    int y;
};

struct pos mk_pos(int x, int y)
{
    struct pos rv = {x, y};
    return rv;
}


void set_grid(struct pos p, int which)
{
    g_grid[p.y * g_grid_sz + p.x] |= which;
}
unsigned char get_grid(struct pos p)
{
    return g_grid[p.y * g_grid_sz + p.x];
}

int is_same_pos(struct pos p) {
    return (get_grid(p) & (ME | RIVAL)) == (ME | RIVAL);
}
int rival_at(struct pos p) {
    return get_grid(p) & RIVAL;
}
int me_at(struct pos p) {
    return get_grid(p) & ME;
}
int do_i_want_to_be_there(struct pos prev_p, struct pos p) {
    int diffx = p.x - prev_p.x;
    int diffy = p.y - prev_p.y;
    assert(diffx == 0 || diffy == 0);
    if (diffx) {
        if (p.y == (g_grid_sz - 1))
            return 1; 
        
        
        for (int x=p.x; x< g_grid_sz; x++) {
            int can_reach_x = (get_grid(mk_pos(x, p.y)) & IMP_X) == 0;
            if (!can_reach_x)
                break;
            int can_reach_y = (get_grid(mk_pos(x, g_grid_sz - 1)) & IMP_Y) == 0;
            if (can_reach_y)
                return 1;
        }
        return 0;
    }
    else {
        assert(0); 
    }

    unsigned char edge_x = get_grid(mk_pos(g_grid_sz-1, p.y));
    unsigned char edge_y = get_grid(mk_pos(p.x, g_grid_sz-1));
    if (p.x != g_grid_sz -1 && edge_x & IMP_X) 
        return 0;
    if (p.y != g_grid_sz -1 && edge_y & IMP_Y)
        return 0;
    return 1;
}
static void dump() {
    puts("DUMPBEG");
    for (int i=0; i<g_grid_sz; i++) {
        for (int j=0; j<g_grid_sz; j++) {
            int riv = rival_at(mk_pos(j, i));
            int me = me_at(mk_pos(j, i));
            int X = get_grid(mk_pos(j, i)) & IMP_X;
            int Y = get_grid(mk_pos(j, i)) & IMP_Y;
            putc(riv? 'R' : ' ', stdout);
            putc(me? 'M' : ' ', stdout);
            putc(X ? 'X' : ' ', stdout);
            putc(Y ? 'Y' : ' ', stdout);
            putc('|', stdout);
        }
        putc('\n', stdout);
    }
    puts("DUMPEND");
}
static void do_prob(){
    struct pos me = {0, 0};
    while ((me.x < g_grid_sz - 1) && (me.y < g_grid_sz - 1)) {
#if DUMP
        dump();
#endif
        if (is_same_pos(me)) { 
            if (rival_at(mk_pos(me.x + 1, me.y))) {
                
                me.y++;
            }
            else {
                me.x++;
            }
        }
        else {
            if (do_i_want_to_be_there(me, mk_pos(me.x + 1, me.y)))
                me.x++;
            else
                me.y++;
        }
        set_grid(me, ME);
    }
    for (; me.x < g_grid_sz - 1; ) {
        me.x++;
        set_grid(me, ME);
    }
    for (; me.y < g_grid_sz - 1; ) {
        me.y++;
        set_grid(me, ME);
    }
    assert((me.x == g_grid_sz - 1) && (me.y == g_grid_sz - 1));
}



static int aatoi(const char *ln, int *out) {
    const char *adv = ln;
    int acc = 0;
    while (!isdigit(*adv) && *adv)
        adv++;
    if (!isdigit(*adv))
        return 0;
    while (isdigit(*adv)){
        acc *= 10;
        acc += *adv - '0';
        adv++;
    }
    *out = acc;
    return adv - ln;
}

static void set_input_gridsz(const char *line) {
    const char *inp = line;
    int advance;
    advance = aatoi(inp, &g_grid_sz);
    if (!advance)
        die("cant parse grid size");
    assert(g_grid_sz >= 1);
    memset(g_grid, 0, (g_grid_sz+1) * (g_grid_sz+1));
}

static void color(struct pos p, int which_axis)
{
    if (which_axis == IMP_X) {
        for (int x = p.x; x<g_grid_sz; x++){
            set_grid(mk_pos(x, p.y), IMP_X);
        }
    }
    else {
        for (int y = p.y; y<g_grid_sz; y++){
            set_grid(mk_pos(p.x, y), IMP_Y);
        }
    }
}

static void set_input_grid(const char *line) {
    struct pos rival = { 0, 0 };
    set_grid(rival, RIVAL);
    for (int i=0; line[i]; i++) {
        if (toupper(line[i]) == 'S') {
            rival.y++;
            color(rival, IMP_Y);
        }
        if (toupper(line[i]) == 'E') {
            rival.x++;
            color(rival, IMP_X);
        }
        set_grid(rival, RIVAL);
    }
}

static void print_res(int case_num) {
#if DUMB
    dump();
#endif
    //Case #3: 667 3777
    printf("Case #%d: ", case_num);
    struct pos me = {0, 0};
    while ((me.x < g_grid_sz - 1) || (me.y < g_grid_sz - 1)) {
        if ((me.x < g_grid_sz - 1) && me_at(mk_pos(me.x+1, me.y))) {
            me.x++;
            putc('E', stdout);
            assert(!(rival_at(mk_pos(me.x-1, me.y)) && rival_at(mk_pos(me.x, me.y))));
        }
        else if ((me.y < g_grid_sz - 1) && me_at(mk_pos(me.x, me.y+1))){
            me.y++;
            putc('S', stdout);
            assert(!(rival_at(mk_pos(me.x, me.y-1)) && rival_at(mk_pos(me.x, me.y))));
        }
        else {
            assert(0);
        }
    }
    putc('\n', stdout);
}


int main(int argc, const char **argv) {
    if (fgets(g_line, MAXLINE, stdin) == NULL)
        return 1;
    int ncases;
    if (!aatoi(g_line, &ncases))
        die("cant parse ncases");
    for (int i=0; i<ncases && (fgets(g_line, MAXLINE, stdin) != NULL); i++) {
        set_input_gridsz(g_line);
        if (!fgets(g_line, MAXLINE, stdin))
            die("cant parse grid moves");
        set_input_grid(g_line);
        do_prob();
        print_res(i+1);
    }
}
