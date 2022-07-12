#include <stdio.h>
#include <string.h>

int main (void)
{
    int M;
    printf("Vendosni madhesine e vektorit :");
    scanf("%d", &M);
    int i;

    char emrat[M][100];
    char profesioni[M][100];
    int teArdhurat[M];
    for(i = 0 ; i < M ; i++)
    {
        printf("Vendosni emrin e personit te %d :", i + 1);
        scanf("%s", &emrat[i]);
        printf("Vendosni profesionin e personit te %d:", i + 1);
        scanf("%s", &profesioni[i]);
        printf("Vendosni te ardhurat e personit te %d :", i + 1);
        scanf("%d", &teArdhurat[i]);
    }

    /* a ) Cilat janë të ardhurat maksimale që janë marrë
    dhe a ka të paktën dy punonjës që kanë marrë
    këto të ardhura?**/
    int max = teArdhurat[0];
    int indeksi = 0;
    for (i = 0 ; i < M ; i++)
    {
        if (max < teArdhurat[i])
        {
            max = teArdhurat[i];
            indeksi = i;
        }
    }

    printf("Paga maksimale eshte %d\n", max);
    int k = 0;
    for (i = 0 ; i < M ; i++)
    {
        if (max == teArdhurat[i])
        {
            k++;
        }
    }

    if (k >= 2)
    {
        printf("%d persona e marrin rroge te barabarte me maksimalen.\n", k);
    }
    else
    {
        printf("Vetem nje person merr rroge te barabarte me maksimalen.\n");
    }

    /*b) Cilët janë llojet e profesioneve të ndryshme të punonjësve tanë?**/
    printf("Profesionet unike jane :\n");
    for(i = 0 ; i < M ; i++)
    {
        printf("%d.%s\n", i + 1,profesioni[i]);
    }
    /* c)A është e vertetë që punonjësit E1 dhe E2 kanë të njëjtin profesion
     dhe kanë të ardhura të njëjta?**/

    if ( (strcmp(profesioni[0], profesioni[1]) == 0) && (teArdhurat[0] == teArdhurat[1]))
    {
        printf("Po ata kane pofesione dhe te ardhura te njejta.\n");
    }
    else if ((strcmp(profesioni[0], profesioni[1]) != 0) &&(teArdhurat[0] == teArdhurat[1]))
    {
        printf("Ata kane vetem te ardhura te njejta.\n");
    }
    else if ((strcmp(profesioni[0], profesioni[1]) == 0) &&(teArdhurat[0] != teArdhurat[1]))
    {
        printf("Ata kane vetem profesion te njejte.\n");
    }
    else
    {
        printf("Nuk kane asgje te perbashket.\n");
    }

    /* d) Punonjësit me të ardhura minimale, do marrin një shpërblim për rritjen e mireqënies.
    Cilët janë këta punonjës dhe cili është profesioni i tyre? ?**/

    int min = teArdhurat[0];
    for(i = 0 ; i < M ; i++)
    {
        if (min > teArdhurat[i])
        {
            min = teArdhurat[i];
        }
    }
    printf("Te ardhurat minimale jane %d\n", min);
    k = 0;
    for(i = 0 ; i < M ; i++)
    {
        if (min == teArdhurat[i])
        {
            printf("%s\t%s\n", emrat[i], profesioni[i]);
            k++;
        }
    }
    printf("Gjithsej jane %d persona te cilet do te marrin rritje mireqenieje.\n", k);

    /*e) Afishoni numrin e punonjësve që i kanë të ardhurta ndërmjet vlerave A dhe B të dhënë.**/
    int A, B;
    printf("Vendosni kufirin e poshtem A :");
    scanf("%d", &A);
    printf("Vendosni kufirin e siperm B :");
    scanf("%d", &B);
    k = 0;
    for(i = 0 ; i < M ; i++)
    {
        if (teArdhurat[i] > A && teArdhurat[i] < B)
        {
            k++;
        }
    }
    printf("Gjithsej jane %d persona te cilet e kane pagen midis %d dhe %d.\n", k, A, B);
    return 0 ;
}
