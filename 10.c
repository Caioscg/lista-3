#include <stdio.h>
 
int main() {
 
    int v[1000], w[1000], n, vmax=0, wmin=99999999;
    int i, t;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &v[i]);
        if(v[i]>vmax) vmax=v[i];
        printf("%d", v[i]);
        if(i>=0 && i<n-1) printf(" ");
    }
    printf("\n");
    i--;
    while(i>=0) {
        printf("%d", v[i]);
        if (v[i]<wmin) wmin=v[i];
        if(i>0) printf(" ");
        i--;
    }
    printf("\n");
    printf("%d\n", vmax);
    printf("%d\n", wmin);
 
    return 0;
}