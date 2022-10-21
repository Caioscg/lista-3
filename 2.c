#include <stdio.h>
int main () {
    int V[1000], N, K, i=0, t=0;
 
    while (1) {
        scanf("%d", &N);
        if (N>=1 && N<=1000) break;
    }
 
    while (i<N) {
        scanf("%d", &V[i]);
        i++;
    }
    i=0;
    scanf("%d", &K);
    while (i<N) {
        if (V[i] >= K) t++;
        i++;
    }
    
    printf("%d\n", t);
 
    return 0;
}