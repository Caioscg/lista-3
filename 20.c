#include <stdio.h>
#include <string.h>
 
int main(){
    int n=1, d=1,i, k ,f, maior=0;
    char v[1000000];
    char premio[1000000];
    while(1){
        scanf("%d %d%*c", &n, &d);
        if(n==0&&d==0)break;
        scanf("%s", v);
        f=d;
        for(k=0;k<d;k++){
            for(i=0;i<=(strlen(v)-f);i++){
                if(maior==0){
                    maior=v[i];
                    v[i]=32;}
                if(v[i]>maior){
                    maior=v[i];
                    v[i]=32;
                }
            }
            premio[k]=maior;
            f--;
            maior=0;
            
        }
        printf("%s\n", premio);
        memset(premio, 0, 1000000);
    }
    return 0;
}