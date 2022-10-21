#include <stdio.h>
 
int main () {
    int v[5000], n, i=0;
    scanf("%d", &n);
    while (i<n) {
        scanf("%d", &v[i]);
        i++;
    }
    i--;
    while (i>=0) {
        printf("%d ", v[i]);
        i--;
    }
    printf("\n");
    return 0;
}