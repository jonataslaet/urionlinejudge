#include <stdio.h>
 
typedef struct Cord
{
    double x, y;
} cord;
  
int main(){
      
    cord cordenada;
      
    scanf("%lf %lf", &cordenada.x, &cordenada.y);
    if (cordenada.x == 0 && cordenada.y == 0){
        printf("Origem\n");
    }
    else if (cordenada.x == 0 && cordenada.y != 0){
        printf("Eixo Y\n");
    }
    else if (cordenada.y == 0 && cordenada.x != 0){
        printf("Eixo X\n");
    }
    else if (cordenada.x > 0 && cordenada.y > 0){
        printf("Q1\n");
    }
    else if (cordenada.x < 0 && cordenada.y > 0){
        printf("Q2\n");
    }
    else if (cordenada.x < 0 && cordenada.y < 0){
        printf("Q3\n");
    }
    else if (cordenada.x > 0 && cordenada.y < 0){
        printf("Q4\n");
    }
      
    return 0;   
}