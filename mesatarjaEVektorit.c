#include <stdio.h>

int main (void)
{

    int n , i;
    printf("Vendosni n, numrin e vlerave qe ka vektori:");
    scanf("%d", &n);

    float v[n];
    for(i = 0; i < n; i++)
    {
        printf("Vendosni numrin %d:", i+1);
        scanf("%f", &v[i]);
    }

    float shuma = 0;
    for(i = 0; i < n; i++)
    {
        shuma = shuma + v[i];

    }
    float mesatarja = shuma / n ;

    printf("Mesatarja e numrave eshte %.2f.", mesatarja);
    return 0;
}
