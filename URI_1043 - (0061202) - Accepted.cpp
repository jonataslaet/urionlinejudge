#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float ma, per, area, x, y, z;
    
    scanf("%f %f %f", &x, &y, &z);
    if (x >= y && x >= z){
        ma = x;
        if (x < (z + y) && x > abs(y - z)){
            per = x + y + z;
            printf("Perimetro = %.1f\n", per);
        }
        else{
            area = (((x + y) * z)/2);
            printf("Area = %.1f\n", area); 
        }
    }
    else if (y >= x && y >= z){
        ma = y;
        if (y < (x + z) && y > abs(x - z)){
            per = x + y + z;
            printf("Perimetro = %.1f\n", per);
        }
        else{
            area = (((x + y) * z)/2);
            printf("Area = %.1f\n", area); 
        }
    }
    else if (z >= x && z >= y){
        ma = z;
        if (z < (x + y) && z > abs(x - y)){
            per = x + y + z;
            printf("Perimetro = %.1f\n", per);
        }
        else{
            area = (((x + y) * z)/2);
            printf("Area = %.1f\n", area); 
        }
    }
        
    return 0;    
}