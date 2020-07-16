#include <stdio.h>
#include <stdlib.h>

struct pos {
	int where, off;
};

static int cmp(const void *p1, const void *p2) {
	const struct pos *a1, *a2;

	a1 = p1;
	a2 = p2;
	return a1->where - a2->where;
}

int main(void) {
	int tt, ii, p, q, x, y, i, sx, sy, nx, ny, bx, by;
	struct pos px[500];
	struct pos py[500];
	char d;

	scanf("%d", &tt);
	for(ii = 1; ii <= tt; ii++) {
		printf("Case #%d: ", ii);
		scanf("%d%d", &p, &q);
		sx = sy = 0;
		nx = ny = 0;
		for(i = 0; i < p; i++) {
			scanf("%d%d", &x, &y);
			scanf(" %c", &d);
			switch(d) {
				case 'N': py[ny].where = y + 1; py[ny].off = 1; ny++; break;
				case 'S': py[ny].where = y; py[ny].off = -1; ny++; sy++; break;
				case 'E': px[nx].where = x + 1; px[nx].off = 1; nx++; break;
				case 'W': px[nx].where = x; px[nx].off = -1; nx++; sx++; break;
			}
		}
		qsort(px, nx, sizeof(*px), cmp);
		qsort(py, ny, sizeof(*py), cmp);
		x = y = 0;
		bx = (px[0].where > 0) ? sx : -1;
		by = (py[0].where > 0) ? sy : -1;
		for(i = 0; i < nx; i++) {
			sx += px[i].off;
			if(sx > bx && (i + 1 >= nx || px[i+1].where > px[i].where)) {
				x = px[i].where;
				bx = sx;
			}
		}
		for(i = 0; i < ny; i++) {
			sy += py[i].off;
			if(sy > by && (i + 1 >= ny || py[i+1].where > py[i].where)) {
				y = py[i].where;
				by = sy;
			}
		}
		printf("%d %d\n", x, y);
	}
	return 0;
}
