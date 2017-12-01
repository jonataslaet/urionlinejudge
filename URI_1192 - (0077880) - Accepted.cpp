#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(){
    
    int n, i, d1, d3, result;
    char d2, cpd2;
    
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        scanf("%d %c %d", &d1, &d2, &d3); cpd2 = toupper(d2);
        if (d1 == d3){
            result = d3 * d1;
            printf("%d\n", result);
        }
        else if (cpd2 == d2) {
           result = d3 - d1;
           printf("%d\n", result); 
        }
        else if (cpd2 != d2){
           result = d3 + d1;
           printf("%d\n", result); 
        }
        
    }    
    
    
    return 0;
}