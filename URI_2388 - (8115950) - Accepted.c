#include <stdio.h>

int main(){
    
    int n, i, t, v, result = 0;
    
    scanf("%i", &n);
    for (i = 0; i < n; i++){
        scanf("%i %i", &t, &v);
        result = result + (t * v);    
    }
    printf("%i\n", result);
    
    return 0;   
}