#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main(){
     
    long long int num1, num2, x, i, t;
    char num1bin[33], num2bin[33], somabin[33];
    long long numx;
     
    while (scanf("%lld %lld", &num1, &num2) != EOF){
        x = num1 + num2;
        num1bin[32] = '\0'; num2bin[32] = '\0';
        for (i = 31; i >= 0; i--){
            num1bin[i] = (num1 % 2) + '0';
            num1 = num1 / 2;
            num2bin[i] = (num2 % 2) + '0';
            num2 = num2 / 2;
        }
        numx = 0;
        t = 31;
        for (i = 0; i < 32; i++){
            if (num1bin[i] == '1' && num2bin[i] == '1') {
               somabin[i] = '0';
               numx+=(0*(pow(2,t)));
            }  
            else if (num1bin[i] == '1' && num2bin[i] == '0') {
               somabin[i] = '1';
               numx+=(1*(pow(2,t)));
            }
            else if (num1bin[i] == '0' && num2bin[i] == '1') {
               somabin[i] = '1';
               numx+=(1*(pow(2,t)));
            }
            else if (num1bin[i] == '0' && num2bin[i] == '0') {
               somabin[i] = '0';
               numx+=(0*(pow(2,t)));
            }
            t--;
        }
        somabin[32] = '\0';
         
        printf("%lld\n", numx);
    }
     
     
    return 0;
}