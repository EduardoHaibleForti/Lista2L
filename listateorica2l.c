#include <stdio.h>
#include <stdlib.h>

int main (){
    int total, notas100, notas50, notas10, notas5, notas1;

    printf("Digite o valor total em dinheiro :");
    scanf("%d",&total);

    notas100=total/100;
    total=total%100;

    notas50=total/50;
    total=total%50;

    notas10=total/10;
    total=total%10;

    notas5=total/5;
    total=total%5;

    notas1=total/1;

    printf("Notas de 100 reais : %d\n",notas100);
    printf("Notas de 50 reais : %d\n",notas50);
    printf("Notas de 10 reais : %d\n",notas10);
    printf("Notas de 5 reais : %d\n",notas5);
    printf("Notas de 1 real : %d\n",notas1);

    return 0;
}
