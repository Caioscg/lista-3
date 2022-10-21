#include <stdio.h>
int main () {
    int N, i=2, k=0;
    double r1, r2, r3, R, v1[1000], v2[1000], aux[1000];
 
    scanf("%d", &N);
    while (k<3) {
            scanf("%lf",  &v1[k]);
            k++;
        }
        k=0;
        while (k<3) {
            scanf("%lf",  &v2[k]);
            k++;
        }
        k=0;
        r1=v2[0]-v1[0]; if (r1<0) r1=-r1;
        r2=v2[1]-v1[1]; if (r2<0) r2=-r2;
        r3=v2[2]-v1[2]; if (r3<0) r3=-r3;
        if (r1>=r2 && r1>=r3) R=r1;
        if (r2>=r1 && r2>=r3) R=r2;
        if (r3>=r1 && r3>=r2) R=r3;
        printf("%.2lf\n", R);
    while (i<N) {
        while (k<3) {
            v1[k]=v2[k];
            k++;
        }
        k=0;
        while (k<3) {
            scanf("%lf",  &v2[k]);
            k++;
        }
        k=0;
        i++;
        r1=v2[0]-v1[0]; if (r1<0) r1=-r1;
        r2=v2[1]-v1[1]; if (r2<0) r2=-r2;
        r3=v2[2]-v1[2]; if (r3<0) r3=-r3;
        if (r1>r2 && r1>r3) R=r1;
        if (r2>r1 && r2>r3) R=r2;
        if (r3>r1 && r3>r2) R=r3;
        printf("%.2lf\n", R);
    }
 
    return 0;
}