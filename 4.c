#include <stdio.h>
#include <string.h>
 
int main () {
    int n, i=0, l=0, t=0;
    char str[100];
    scanf("%d", &n);
    if (n>1 && n<1000) {
        while (i<n) {
            scanf("%s", str);
            while(str[t] != '\0') {
                if (str[t] == '1') l=l+2;
                else if (str[t] == '2') l=l+5;
                else if (str[t] == '3') l=l+5;
                else if (str[t] == '4') l=l+4;
                else if (str[t] == '5') l=l+5;
                else if (str[t] == '6') l=l+6;
                else if (str[t] == '7') l=l+3;
                else if (str[t] == '8') l=l+7;
                else if (str[t] == '9') l=l+6;
                else if (str[t] == '0') l=l+6;
                t++;
            }
            printf("%d leds\n", l);
            l=0;
            i++;
            t=0;
        }
    }
 
    return 0;
}