#include<stdio.h>
#include<math.h>
main () {
    
    int t, n, n1, n2, power=0, flag, temp, a;
    scanf ("%d", &t);
    
    for (int i=1; i<=t; i++) {
        
        scanf ("%d", &n);
        n1 = n;
        n2 = 0;
        
        while (1) {
            power = 1;
            temp = n1;
            flag = 0;
            while (temp != 0) {
                a = temp % 10;
                if (a == 4) {
                    n2 += power;
                    n1 = n1 - power;
                    flag = 1;
                    break;
                }
                temp = temp / 10;
                power = 10 * power;
            }
            
            if (flag == 0) {
                break;
            }
        }
        
        printf ("Case #%d: %d %d", i, n1, n2);
        
    }
    
}