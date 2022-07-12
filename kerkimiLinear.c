// Programi i plote kerkimi linear
// Linear search of an array
#include <stdio.h>

void kerkimiLinear (int vektori[], int n, int celesi)
{
    int i , k = 0;
    for (i = 0 ; i < n ; i++)
    {
        if(vektori[i] == celesi)
        {
            printf("Elementi ndodhet ne vektor.");
            k++;

        }
    }
    if(k == 0)
        {
            printf("Elementi nuk ndodhet ne vektor.");
        }
}

int main (void)
{
    const int n = 10;
    int vektori[] = {15,16,48,59,5,4,3,6,36,5};
    int celesi ;
    printf("Vendosni elementin qe doni te dini nese ndodhet ne vektor:");
    scanf("%d", &celesi);
    kerkimiLinear(vektori,n,celesi);
    return 0 ;

}
