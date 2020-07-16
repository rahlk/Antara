#include <stdio.h>
int main()
{
    int n, t;
    scanf("%d",&t);
    for(int i = 0; i < t ; i++){
        scanf("%d",&n);
        int A = n, B = 0, unidad = 1, temp;
        while(A > 0){
            temp = A % 10;
            A /= 10;
            if(temp == 4){
                B += unidad;
            }
            unidad *= 10;
        }
        A = n - B;
        if(B==0){
            temp = A % 10;
            B = 1;
            if(temp == 3 || temp == 9){
                A -= B;
            }else{
                A += B;
            }
        }
        printf("Case #%d: %d %d\n",i+1,A,B);
    }
}
