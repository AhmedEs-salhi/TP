#include <stdio.h>

int main()
{
	int tab[100];
	int i, j, min, n, position;

	do
	{
		printf("Saisir la taille du tableau : ");
		scanf("%d", &n);
	} while(n > 100);

	for(j = 0; j < n; j++)
	{
		printf("saisir la valeur T[%d] : ", j);
		scanf("%d", &tab[j]);
	}
	
	min = tab[0];

	for(i = 1; i < n; i++)
	{
		if(min > tab[i])
		{
			min = tab[i];
			position = i;
		}
	}
	printf("\nle minimum est : %d\n", min);
	printf("Il est dans T[%d]\n", position);

	return 0;
}
