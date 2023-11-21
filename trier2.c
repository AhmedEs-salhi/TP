#include <stdio.h>
#define Nmax 100

int main()
{
    int Tab[Nmax], TabN[Nmax], TabP[Nmax], n, i, j;

    do
    {
        printf("Entrer la taille du tableau : ");
        scanf("%d", &n);
    }while(n > Nmax);

    for(i = 0; i < n; i++)
    {
        printf("la valeur Tab[%d] = ", i);
        scanf("%d", &Tab[i]);
    }

    int P, N;

    P = 0;
    N = 0;
    j = 0;
    while(j < n)
    {
        if(Tab[j] >= 0)
        {
            TabP[j] = Tab[j];
            P++;
        }
        else
        {
            TabN[j] = Tab[j];
            N++;
        }
        j++;
    }

    printf("\nTabP : [ ");
    for(int k = 0; k < P; k++)
    {
        printf("%d", TabP[k]);
        if(k < P - 1)
        {
            printf(", ");
        }
    }
    printf(" ]\n");

    printf("TabN : [ ");
    for(int l = 0; l < N; l++)
    {
        printf("%d", TabN[l]);
        if(l < N - 1)
        {
            printf(", ");
        }
    }
    printf(" ]\n");
    return 0;
}

