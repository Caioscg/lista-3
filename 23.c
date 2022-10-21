#include <stdio.h>
 
int main() {
 
    int q1, q2;
    scanf("%d", &q1);
    scanf("%d", &q2);
    int v1[q1];
    int v2[q2];
    int v3[q1+q2];
    int v4[q1+q2];
    int i, k, c, t=0;
    for(i=0; i<q1; i++) {
        scanf("%d", &v1[i]);
    }
    for(i=0; i<q2; i++) {
        scanf("%d", &v2[i]);
    }
    c=0;
    i=0;
    while(i<q1) {
        v3[c]=v1[i];
        c++;
        i++;
    }
    k=0;
    while(k<q2) {
        v3[c]=v2[k];
        c++;
        k++;
    }
    c=0;
    for(i=0; i<(q1+q2); i++) {
        for(k=0; k<(q1+q2); k++) {
            if(v3[i]<=v3[k]) c++;
            if(v3[i]==v3[k]) t++;
        }
        t--;
        if(t==0) v4[k-c]=v3[i];
        else {
            while(t!=-1) {
                v4[(k-c)+t]=v3[i];
                t--;
            }
        }
        c=0;
        t=0;
    }
    for(i=0; i<(q1+q2); i++) {
        printf("%d\n", v4[i]);
    }
}