#include <stdio.h>
int main () {
    int n, i=0, t=0, k=0;
    char v[1000];
    scanf("%d", &n);
    while (i<n) {
        scanf("%s", v);
        while (v[t]!= '\0') {
            t++;
        }
        if (t==3) {
            if(v[0]=='o') k++;
            if(v[1]=='n') k++;
            if(v[2]=='e') k++;
            if(k>=2) printf("1\n");
            k=0;
            if(v[0]=='t') k++;
            if(v[1]=='w') k++;
            if(v[2]=='o') k++;
            if(k>=2) printf("2\n");
        }    
        k=0;
        if (t==5) {
            if(v[0]=='t') k++;
            if(v[1]=='h') k++;
            if(v[2]=='r') k++;
            if(v[3]=='e') k++;
            if(v[4]=='e') k++;
            if(k>=4) printf("3\n");
        }
        t=0;
        i++;
        k=0;
    }
 
    return 0;
}