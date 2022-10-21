    #include <stdio.h>
     
    int main () {
        int c=0, k=0;
        char v[51];
     
        while (scanf("%[^\n]%*c", v) != EOF) {
            while (v[c]!='\0') {   
                if (k%2==0) {
                    if (c%2==0) {
                        if (v[c]==32) {
                            k++;
                            c++;
                        }
                        else if (v[c]>96) {
                            v[c]=v[c]-32;
                            c++;
                        }       
                        else c++;
                    }
                    else if (c%2!=0) {
                        if (v[c]==32) {
                            k++;
                            c++;
                        }    
                        else if (v[c]<97) {
                            v[c]=v[c]+32;
                            c++;
                        }
                        else c++;
                    }
                }    
                else if (k%2!=0) {
                    if (c%2!=0) {
                        if (v[c]==32) {
                            k++;
                            c++;
                        }
                        else if (v[c]>96) {
                            v[c]=v[c]-32;
                            c++;
                        }       
                        else c++;
                    }
                    else if (c%2==0) {
                        if (v[c]==32) {
                            k++;
                            c++;
                        }    
                        else if (v[c]<97) {
                            v[c]=v[c]+32;
                            c++;
                        }
                        else c++;
                    }
                }
            }
            printf("%s\n", v);
            c=0;
            k=0;
        }
     
        return 0;
    }