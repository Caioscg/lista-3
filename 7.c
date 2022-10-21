#include <stdio.h>
int main () {
    int v[10000], n, t=0, i=0, k=0;
    while (1){
        scanf("%d", &n);
        if (n==0) break;
        while(t<n) {
            scanf("%d", &v[t]);
            t++;
        }
        t=0;
        while(1) {
            while(t<n) {
                if(v[t]<=i) k++;
                t++;
            }
            t=0;
            printf("(%d) %d\n", i, k);
            i++;
            if (k==n) break;
            k=0;
        }
        k=0;
        i=0;
    }
 
    return 0;
}