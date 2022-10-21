#include <stdio.h>
 
int main () {
    int n, loteria[6], jogo[6], i=0, j=0, l=0, k=0, s=0, qi=0, qa=0;
 
    while (l<6) {
        scanf("%d", &loteria[l]);
        l++;
    } 
    l=0;
    scanf("%d", &n);
    while (i<n) {
        while (j<6) {
            scanf("%d", &jogo[j]);
                while (l<6) {
                    if (jogo[j]==loteria[l]) k++;
                    l++;
                }
            l=0;
            j++;
        }
        j=0;
        if (k==6) s++;
        else if (k==5) qi++;
        else if (k==4) qa++;
        k=0;
        i++;
    }
    if (s>0) printf("Houve %d acertador(es) da sena\n", s);
    else printf("Nao houve acertador para sena\n");
    if (qi>0) printf("Houve %d acertador(es) da quina\n", qi);
    else printf("Nao houve acertador para quina\n");
    if (qa>0) printf("Houve %d acertador(es) da quadra\n", qa);
    else printf("Nao houve acertador para quadra\n");
 
    return 0;
}