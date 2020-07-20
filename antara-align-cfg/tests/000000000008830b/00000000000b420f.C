#include<stdio.h>
#include<stdlib.h>

long gcd(long a, long b) {
    if (a == b)
        return a;
    else if (a > b)
        return gcd(a - b, b);
    else
        return gcd(a, b - a);
}
int bin_search(long * map, int l, int u, long key) {
    if (u >= l) {
        int mid = (l + u) / 2;
        if (map[mid] == key)
            return mid;
        else if (map[mid] > key)
            return bin_search(map, l, mid - 1, key);
        else
            return bin_search(map, mid + 1, u, key);
    }
    return -1;
}
int lin_search(long * map, int l,int u, long key){
	int i;
	for(i=0;i<=u;i++)
	{
		if(map[i]==key)
			return i;
	}
	return -1;
}
char get_pana(long key, int n, long * map) {
    switch (lin_search(map, 0, n - 1, key)) {
    case 0:
        return 'A';
    case 1:
        return 'B';
    case 2:
        return 'C';
    case 3:
        return 'D';
    case 4:
        return 'E';
    case 5:
        return 'F';
    case 6:
        return 'G';
    case 7:
        return 'H';
    case 8:
        return 'I';
    case 9:
        return 'J';
    case 10:
        return 'K';
    case 11:
        return 'L';
    case 12:
        return 'M';
    case 13:
        return 'N';
    case 14:
        return 'O';
    case 15:
        return 'P';
    case 16:
        return 'Q';
    case 17:
        return 'R';
    case 18:
        return 'S';
    case 19:
        return 'T';
    case 20:
        return 'U';
    case 21:
        return 'V';
    case 22:
        return 'W';
    case 23:
        return 'X';
    case 24:
        return 'Y';
    case 25:
        return 'Z';
    }
}
int main() {
    int t, i, j, k, N, L, curLen, temp, flag;
    scanf("%d", & t);
    for (i = 0; i < t; i++) {
        scanf("%d%d", & N, & L);
        curLen = 0;
        long * p_list = (long * ) malloc(sizeof(long) * L);
        long * m_list = (long * ) malloc(sizeof(long) * (L + 1));
        long * map = (long * ) malloc(sizeof(long) * 26);
        for (j = 0; j < L; j++)
            scanf("%ld", & p_list[j]);
        temp = m_list[0] = p_list[0] / gcd(p_list[0], p_list[1]);
        map[curLen++] = temp;
        /*for (j = 1; j < L + 1; j++) {
            temp = m_list[j] = p_list[j - 1] / temp;
            if (curLen < 26) {
                flag = -2;
                for (k = 0; k <= curLen; k++) {
                    if (map[k] == m_list[j]) {
                        flag = -1;
                        break;
                    } else if (map[k] > m_list[j]) {
                        flag = k;
                        break;
                    }
                }
                if (flag != -1) {
                    if (flag == -2) map[curLen++] = m_list[j];
                    else {
                        for (k = curLen; k >= flag; k--)
                            map[k + 1] = map[k];
                        map[k + 1] = m_list[j];
                        curLen++;
                    }
                }
            }
        }*/
        printf("Case #%d: ", i + 1);
        for (j = 0; j <= L; j++)
            printf("%c", get_pana(m_list[j], 26, map));
        printf("\n");
	free(p_list);
	free(m_list);
	free(map);
}
}