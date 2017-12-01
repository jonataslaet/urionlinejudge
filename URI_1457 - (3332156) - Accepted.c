#include <stdio.h>
#include <string.h>

int main(){
    
    
    long long int fat;
    long long int k, qtdk, i, j, tam, t, n, x;
    char cadeia[101], num[101];
    
    scanf("%lld", &t);
    for (i = 0; i < t; i++){
        scanf("%s", cadeia);
        
        x = 0;
        qtdk = 0;
        for (j = 0; cadeia[j] != '\0'; j++){
            if (cadeia[j] != '!'){
               num[x] = (cadeia[j]);
               x++;
            }
            if (cadeia[j] == '!'){
               qtdk++;   
            }    
        }
        num[x] = '\0';
        
        n = atoi(num);
        fat = 1;
        for (j = 0; j < n; j++){
            if (n - (j * qtdk) >= 1){
               fat = fat * (n - (j * qtdk)); 
            } 
            else{
                 break;     
            }   
        }
        printf("%lld\n", fat);
    }
    
    return 0;   
}