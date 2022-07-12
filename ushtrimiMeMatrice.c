#include <stdio.h>

int main (void)
{
    const int n = 4, m = 4; /* meqe shembulli qe morem kishte vetem 4 rreshta dhe 4 kolona
                            por mund ta linim dhe ne dore te perdoruesit.**/
    int vektor[n][m], i, j;

    for (i = 0; i < n ; i++)
    {
        for(j = 0 ; j < m ; j++)
        {
            printf("Vendosni noten ne rreshtin e %d , kolona %d:  ", i + 1, j+ 1);
            scanf("%d", &vektor[i][j]);
        }
    }
    int vektorIRi [4] ; /// sepse do jete i barabart me numrin e rreshtave qe ka tabela
    for (i = 0; i < n ; i++)
    {
        int k = 0;
        for(j = 0 ; j < m ; j++)
        {
            if (vektor[i][j] != 4)
            {
                k++;
            }
            vektorIRi [i] = k; /// i jap vlere vektorit te ri qe do te kete per vlera vlerat e k
        }
    }
    for (i = 0 ; i < 4 ; i++)
    {
        printf("%d jane kalues ne klasen %d\n", vektorIRi[i], i + 1);
    }
    int max = vektorIRi[0];
    int poz = 0;
    for (i = 0 ; i < 4 ; i++)
    {
        if (vektorIRi [i] > max)
        {
            max = vektorIRi [i];
            poz = i;
        }
    }
    printf("Klasa %d ka kalueshmerine me te larte.\n", poz + 1);
    printf("%d eshte kalueshmeria me e larte.", max);

    return 0;

}
