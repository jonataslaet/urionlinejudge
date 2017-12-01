#include <stdio.h>

int main(){
    
    int n1, n2, ma, me, i;    
    scanf("%d %d", &n1, &n2);
    
    if (n1 > n2) {
       ma = n1; 
       me = n2;
    }
    else{
        ma = n2;
        me = n1;
    }
    for (i = me + 1; i < ma; i++){
        if (i % 5 == 2 || i % 5 == 3) printf("%d\n", i);
    }

    return 0;
}