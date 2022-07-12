#include <stdio.h>

int prodhimi (int n){
    if (n == 0){
    return 0;
    }
    if (n == 1){
    return 1;
    }
    else {
    return((2*n - 1) * prodhimi(n - 1));
    }
}

///1 3 5 7 9

int main (void){
     int nr;
     printf("Vendosni n , numrin e shifrave prodhimin e te cileve doni te dini:");
     scanf("%d", &nr);

     int x = prodhimi(nr);
     printf("Prodhimi i numrave eshte %d.", x);
     return 0;
}


