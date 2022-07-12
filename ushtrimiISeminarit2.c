#include <stdio.h>
int main (void)
{
    int n ;
    printf("Vendosni numrin e punetoreve:");
    scanf("%d", &n);
    int i ;
    char E[n];
    for (i = 0; i < n ; i++)
    {
        printf("Vendosni emrat e punetoreve:");
        scanf("%s", &E[i]);

    }
    float P[n];
    for (i = 0; i < n ; i++)
    {
        printf("Vendosni pagat e punonjesve:");
        scanf("%f", &P[i]);

    }

    float pagaMes , shuma = 0;
    for (i = 0 ; i < n ; i++){
        shuma = shuma + P[i];
    }
    pagaMes = shuma / n ;

    int k = 0;

   for (i = 0 ; i < n ; i++){
    if (P[i] > 11000){
    k++;
    }
   }
   printf("%d punonjes e kane rrogen me te larte se 11000 leke.", k);
   return 0;
}
