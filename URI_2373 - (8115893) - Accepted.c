#include <stdio.h>

int main(){
    
    int n, i, l, c, q = 0;
    
    scanf("%i", &n);
    for (i = 0; i < n; i++){
        scanf("%i %i", &l, &c);
        if (l > c){
           q = q + c;     
        }
    }
    printf("%i\n", q);
    
    return 0;   
}
