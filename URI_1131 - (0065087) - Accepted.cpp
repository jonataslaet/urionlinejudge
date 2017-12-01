#include <stdio.h>

int main(){

    int z, in, gr, qtdemp = 0, qtdvin = 0, qtdvgr = 0, qtdptd = 0, opt;

    for (z = 0;; z++){
        scanf("%d %d", &in, &gr);
        if (in == gr) qtdemp++;
        else if (in > gr) qtdvin++;
        else if (gr > in) qtdvgr++;
        qtdptd++;
        printf("Novo grenal (1-sim 2-nao)\n");
        do{
            scanf("%d", &opt);
            if (opt < 1 || opt > 2){
                printf("Novo grenal (1-sim 2-nao)\n");
            }
        }while(opt < 1 || opt > 2);
        if (opt == 2){
            printf("%d grenais\n", qtdptd);
            printf("Inter:%d\n", qtdvin);
            printf("Gremio:%d\n", qtdvgr);
            printf("Empates:%d\n", qtdemp);
            if (qtdvin > qtdvgr) printf("Inter venceu mais\n");
            else if (qtdvgr > qtdvin) printf("Gremio venceu mais\n");
            else printf("Nao houve vencedor\n");
            break;
        }
    }

    return 0;
}
