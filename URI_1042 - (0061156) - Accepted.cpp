#include <stdio.h>

int main(){
    
    int x, y, z;
    
    scanf("%d %d %d", &x, &y, &z);
    if (x >= y && y > z){
        printf("%d\n%d\n%d\n", z, y, x);
    }
    else if (y >= x && x > z){
        printf("%d\n%d\n%d\n", z, x, y);
    }
    else if (z >= x && x > y){
        printf("%d\n%d\n%d\n", y, x, z);
    }
    else if (z >= y && y > x){
        printf("%d\n%d\n%d\n", x, y, z);
    }
    else if (x >= z && z > y){
        printf("%d\n%d\n%d\n", y, z, x);
    }
    else if (y >= z && z > x){
        printf("%d\n%d\n%d\n", x, z, y);
    }
    printf("\n");
    printf("%d\n%d\n%d\n", x, y, z);
    
    return 0;    
}