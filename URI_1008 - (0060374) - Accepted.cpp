#include <stdio.h>

int main(){
    int numint1, numint2;
    float numfloat, salary;
    
    scanf("%d %d %f", &numint1, &numint2, &numfloat);
    salary = (float)numint2 * numfloat;
    printf("NUMBER = %d\n", numint1);
    printf("SALARY = U$ %.2f\n", salary);
    
    return 0;    
}