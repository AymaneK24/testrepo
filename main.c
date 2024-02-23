#include <stdio.h>
main()
{
    int N, n, i;
    printf("Donnez un entier: "); scanf("%d", &N);
    i=N-1;
    while (i!=0 && N%i!=0 && i!=1)
    {
        i--;
    }
    if (i==1) printf("%d est premier", N);
    else printf("%d n'est pas premier", N);
}
