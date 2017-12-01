#include <stdio.h>

int main(){
    
    int id, y, m, d;
    
    scanf("%d", &id);
    y = id / 365;
    m = (id % 365) / 30;
    d = (id % 365) % 30;
    printf("%d ano(s)\n", y);
    printf("%d mes(es)\n", m);
    printf("%d dia(s)\n", d);

    return 0;    
}