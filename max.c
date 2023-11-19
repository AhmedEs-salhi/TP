#include <stdio.h>

int main()
{
    int tab[100];
    int i, j, n, max, position;

    do
    {
        printf("Saisir la taille du tableau (< 100) : ");
        scanf("%d", &n);
    } while (n > 100);
    
    for(i = 0; i < n; i++)
    {
        printf("Enter Tab[%d] : ", i);
        scanf("%d", &tab[i]);
    }

    max = tab[0];
    
    for(i = 1; i < n; i++)
    {
        if(max < tab[i])
        {
            max = tab[i];
	    position = i;
        }
    }

    printf("\nle maximum est : %d\n", max);
    printf("Il est dans T[%d]\n", position);

    return 0;
}
