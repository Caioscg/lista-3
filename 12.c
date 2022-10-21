#include <stdio.h>
int main () {
    int n, i=0, t=0, N, c=0;
    char s[500];
    scanf("%d%*c", &n);
    while (i<n) {
        scanf("%d%*c %[^\n]%*c", &N, s);
        while(c!=N) {
            printf("%c", (char)s[c]);
            c++;
        }
        i++;
        printf("\n");
        c=0;
    }
    return 0;
}