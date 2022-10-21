#include <stdio.h>
int main () {
    int v[10000], n, i=0, k, t=0, j=10;
    scanf("%d", &n);
    while (i<n) {
        scanf("%d", &v[i]);
        i++;
    }
    i--;
    k=v[i];
    i=0;
    while(i<n) {
        if(k==v[i]) t++;
        i++;
    }
    printf("Nota %d, %d vezes\n", k, t);
    t=0;
    i=0;
    while (1) {
        if(v[i]==j) {
            printf("Nota %d, indice %d\n", j, i);
            break;
        } i++;    
        if (i==n) {
            i=0;
            j--;
        }
    }
 
    return 0;
}