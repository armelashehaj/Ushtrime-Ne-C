#include <stdio.h>
/**Ushtrimi 13: të shkruhet një program në C me një funksion, i cili kontrollon nëse dy tabela
numerike me të njëjtin numër elementësh janë të barabarta; le të jetë prototipi i këtij funksioni:
**/
void mbushjaEVektorit (int v[], int n)
{
    int i;
    for(i = 0 ; i < n ; i++)
    {
        printf("Vendos vleren %d : ", i + 1);
        scanf("%d", &v[i]);
    }
}

int barabarte (int v1[], int v2[], int n) {
  int i;
  for(i = 0; i < n; i++) {
    if (v1[i] != v2[i]){
     return 0;
     }
  }
  return 1;
}


int main (void)
{

    int a;
    int * p;
    a = 2;
    p = &a;
    a = a + 1;
    printf("vlera që do të shfaqet është: %d\n",*p);

    int b;
    p = &a;
    *p = 4;
    p = &b;
    *p = 3;
    printf("vlerat e ndyshoreve a dhe ndyshores b do te jene:   %d    ,  %d\n", a, b);

    a = 2;
    p = &a;
    a = a + 2;
    printf("vlera që do të shfaqet është: %d\n", *p);


    int * q;
    a = 3;
    p = &a;
    q = p;
    *q = *q + 5;
    printf("vlera qe do te afishohet do te jete: %d\n", *p);

    int n ;
    printf("Vendos madhesine e vektorit: ");
    scanf("%d", &n);
    int v1[n], v2[n];
    mbushjaEVektorit(v1, n);
    mbushjaEVektorit(v2, n);
    printf("%d" , barabarte(v1,v2, n));
    return 0;
}



