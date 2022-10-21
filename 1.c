#include <stdio.h>
int main () {
    int i=0, N=10, M, m=0, t, r=0;
    int v[100000];
    scanf("%d", &N);
    if (N>=100000 || N<=1) return 0;
    while (i<N) {
        scanf("%d", &v[i]);
        i++;
    }
    scanf("%d", &M);
    if (M>=1000 || M<=1) return 0;
    i=0;
    while (m<M) {
        scanf("%d", &t);
        m++;
        while (i<N) {
            if(v[i]==t) r++;
            i++;
        }
        if(r>0) printf("ACHEI\n");
        else printf("NAO ACHEI\n");
        i=0;
        r=0;
    }
 
 