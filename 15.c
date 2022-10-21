#include <stdio.h>
 
int main () {
 
    int N, K, i=0, v[1000], t=0;
    scanf("%d%d", &N, &K);
 
    while (i<N) {
        scanf("%d", &v[i]);
        if (v[i]>0)
            t++;
        i++;
    }
    i--;
    if ((N-t)<K) printf("SIM\n");
    else {
        printf("NAO\n");
        while (i>=0) {
            if (v[i]<=0) printf("%d\n", i+1);
            i--;
        }
    }    
 
    return 0;
}