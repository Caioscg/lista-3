#include <stdio.h>
int main () {
    char s[10000], aux[10000];
    int n, i=0, t=0, c=0, k;
    scanf("%d%*c", &n);
    while (i<n) {
        scanf("%[^\n]%*c", s);
        while(s[t]!='\0') {
            if (s[t] > 64 && s[t]<91 || s[t]>96 && s[t]<123)
            s[t]=s[t]+3;
            t++;
        }
        c=t; t=0;
        while(s[t]!='\0') {
            aux[c-1]=s[t];
            t++;
            c--;
        }
        k=t/2;
        while(aux[k]!='\0') {
            aux[k]=aux[k]-1;
            k++;
        }
        i++;
        printf("%s\n", aux);
        c=0;
        t=0;
    }
 
    return 0;
}