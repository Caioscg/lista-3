#include <stdio.h>
#include <string.h>
/**
* Converte a string str para o valor inteiro correspondente.
* @param str string contendo um número inteiro
* @return o número inteiro correspondente
*/
long int string2int( const char * str );
 
int main () {
    int i, n, c=0, t=0;
    const char str;
    long int k;
 
    k = string2int(&str);
 
return 0;
}   
 
long int string2int( const char * str ) {
    int n, i=0, c=0, t=0;
    long int k;
 
    while (scanf("%s", str)!= EOF) {
        while (str[i]!='\0') {
            if (str[i]=='0') n=0;
            else if (str[i]=='1') n=1;
            else if (str[i]=='2') n=2;
            else if (str[i]=='3') n=3;
            else if (str[i]=='4') n=4;
            else if (str[i]=='5') n=5;
            else if (str[i]=='6') n=6;
            else if (str[i]=='7') n=7;
            else if (str[i]=='8') n=8;
            else if (str[i]=='9') n=9;
            if (str[i]=='-') c=1;
            i++;
            if (i>1 && c==0) k=(k*10)+n;
            else if (i==1) k=n;   
            else {
                k=n;
                t=1;
                c=0;
            }    
        }  
        if (t!=0) k=-k;
        printf("%d %d\n", k, k*2); 
        i=0; 
        c=0;
        t=0;
    }
    return k;
}