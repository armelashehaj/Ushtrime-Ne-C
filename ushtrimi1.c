#include <stdio.h>

int main (void)
{
    int n ;
    printf("Vendosni numrin e produkteve qe permban dyqani :");
    scanf("%d", &n);

    char E[n];
    int i , j, k = 0;
    for (i = 0 ; i < n ; i++){
    printf("Vendosni emrin e  produktit te %d :", i + 1);
    scanf("%s", &E[i]);
    }

    float C[n];
    for (i = 0 ; i < n ; i++)
    {
        printf("Vendosni cmimin e produktit %d:", i + 1);
        scanf("%f", &C[i]);
    }

  int A[n];
  for (i = 0; i < n ; i++){
        for (j = 1 ; j < n ; j++){
        if (C[i] == C[j]){
        printf("%f C[i] %f C[j]", C[i], C[j]);
        C[j] = 0;
        k++;
        printf("%d k \n", k);
        }
        }
  }
return 0;


}
