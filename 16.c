#include <stdio.h>
 
int main () {
    int n, i=0, v[5000], c=0, k=0;
 
    scanf("%d", &n);
    while (i<n) {
        scanf("%d", &v[i]);
        i++;
    } 
    i--;
    while (i>=0) {
        while (c<n) {
            if (v[c]==v[i] && c!=i) k++;
            c++;
        }
        c=0;
        i--;
    }
    printf("%d\n", n-k);
 
    return 0;
}