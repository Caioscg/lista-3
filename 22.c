#include <stdio.h>
 
int main() {
 
    int casos, i;
    int n9[9], soma=0, e, impostor1, impostor2;
    int t, k, c=0;
    int n7[7], n[7];
    scanf("%d", &casos);
    for(i=0; i<casos; i++) {
        for(t=0; t<9; t++) {
            scanf("%d", &n9[t]);
            soma+=n9[t];
        }
        e=soma-100;
        for(t=0; t<9; t++) {
            for(k=0; k<9; k++) {
                if(n9[t]!=n9[k]) {
                    if((n9[t]+n9[k])==e) {
                        impostor1=n9[t];
                        impostor2=n9[k];
                        break;
                    }
                }
            }
        }
        t=0;
        k=0;
        while(t<9) {
                if(n9[t]!=impostor1 && n9[t]!=impostor2) {
                    n7[k]=n9[t];
                    k++;
                }
            t++;
        }
        for(t=0; t<7; t++) {
            for(k=0; k<7; k++) {
                if(n7[t]<=n7[k]) c++;
            }
            n[k-c]=n7[t];
            c=0;
        }
        for(t=0; t<7; t++) {
            printf("%d\n", n[t]);
        }
        c=0;
        soma=0;
    }
 
    return 0;
}