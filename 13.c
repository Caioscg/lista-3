#include <stdio.h>
int main () {
    int n, i=0, v[12221], inicio, fim, c=0, aux[12221], k, A, B, C, D;
 
    scanf("%d", &n);
    while(i<n) {
        scanf("%d%d", &inicio, &fim);
        k=fim-inicio;
        i++;
        while(inicio<=fim) {
            v[c]=inicio;
            inicio++;
            c++;
        }
        c=0;
        while (c<=k) {
            printf("%d", v[c]);
            c++;
        }
        c--;
        while (c>=0) {
            if (v[c]<10) printf("%d", v[c]);
            else if (v[c]<100) {
                A=v[c]/10;
                B=v[c]%10;
                printf("%d%d", B, A);
            }
            else if (v[c]<1000)  {
                A=v[c]/100;
                B=(v[c]%100)/10;
                C=(v[c]%100)%10;
                printf("%d%d%d", C, B, A);
            }
            else if (v[c]<10000) {
                A=v[c]/1000;
                B=(v[c]%1000)/100;
                C=((v[c]%1000)%100)/10;
                D=((v[c]%1000)%100)%10;
                printf("%d%d%d%d", D, C, B, A);
            }
            c--;
        }
        c=0;
        printf("\n");
          
    }
 
    return 0;
}