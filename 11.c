#include <stdio.h>
int main () {
    int n, i=0, v[100000], aux[100000], c=0, k=0, t=0, j;
    double m;
 
    scanf("%d", &n);
    while (i<n) {
        scanf("%d", &v[i]);
        i++;
    }
    i=0;
    while (c<n) {
        while (i<n) {
            if (v[c] <= v[i]) k++;
            if (v[c] == v[i]) t++;
            i++;
        }
        t--;
        if (t==0) aux[n-k] = v[c]; 
        else 
            while(t!=-1) {
            aux[(n-k)+t] = v[c];    
            t--;
            }    
        i=0;
        k=0;
        t=0;
        c++;
    }
    j=n-1;
    if (n%2==0) m=(double)(aux[j/2]+aux[(j/2)+1])/2;
    else m=aux[j/2];
    printf("%.2lf\n", m);
 
    return 0;
}