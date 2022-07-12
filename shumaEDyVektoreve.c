/**Te ndertohet programi qe lexon nga tastiera vlerat e dy vektoreve me permasa
te njejta dhe llogarit vektorin si shume e dy te pareve. Gjithashtu te shfaqen vektoret dhe
vlerat e tyre*/

#include <stdio.h>

int main (void)
{

    int n, i;
    printf("Vendosni n, numrin e vlerave qe ka vektori:");
    scanf("%d", &n);

    float v1[n], v2[n];
    for(i = 0; i < n; i++)
    {
        printf("Vendosni numrin %d:", i+1);
        scanf("%f", &v1[i]);
    }
    printf("\n");
    for(i = 0; i < n; i++)
    {
        printf("Vendosni numrin %d:", i+1);
        scanf("%f", &v2[i]);
    }

    float vektoriShume[n];

    for(i = 0; i < n; i++)
    {
        vektoriShume[i] = v1[i] + v2[i];
    }

    printf("Vektori i pare eshte:");
    for (i = 0; i < n; i++)
    {
        printf("%.2f\t", v1[i]);
    }
    printf("\n");

    printf("Vektori i dyte eshte:");
    for (i = 0; i < n; i++)
    {
        printf("%.2f\t", v2[i]);
    }
    printf("\n");

    printf("Vektori shume eshte:");
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%.2f\t", vektoriShume[i]);
    }
    return 0;
}

