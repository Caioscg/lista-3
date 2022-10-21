#include <stdio.h>
int main () {
    int n, i=0, t=0, l=0, v=0, c=0;
    char s[10000];
    scanf("%d%*c", &n);
    while (i<n) {
        scanf("%[^\n]%*c", s);
        while (s[t]!= '\0') {
            if (s[t] > 64 && s[t]<123) {
                l++;
                if (s[t]=='a' || s[t]=='A' || s[t]=='e' || s[t]=='E' || s[t]=='i' || s[t]=='I' || s[t]=='o' || s[t]=='O' || s[t]=='u' || s[t]== 'U')
                    v++;
                else c++;    
            }        
                t++;
        }
        printf("Letras = %d\n", l);
        printf("Vogais = %d\n", v);
        printf("Consoantes = %d\n", c);
        v=0; c=0; l=0;
        t=0;
        i++;
    }
    return 0;
}