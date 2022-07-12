#include <stdio.h>

int main (void)
{
    float oret, pagaXOre ;

    printf("Vendosni oret tuaja te punes :");
    scanf("%f", &oret);

    printf("Vendosni pagesen qe merrni per nje ore pune:");
    scanf("%f", &pagaXOre);

    float pagaBruto ;
    pagaBruto = oret * pagaXOre ;
    printf("Paga bruto eshte %.2f.", pagaBruto);
    return 0;
}
