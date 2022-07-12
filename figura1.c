#include <stdio.h>
int main (void){
    int i = 0 , n;
    printf("Vendosni vleren e n :");
    scanf("%d", &n);

    while (i < n){
    int j = 0;
        while (j < 2 * i + 1){
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    printf("\n");
    return 0;
}
