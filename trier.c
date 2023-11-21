#include <stdio.h>

int main()
{
	float tab[100];
	int i, j, n, k;
	float aux;

	do
	{
		printf("saisir la taille du tableau : ");
		scanf("%d", &n);
	}while(n > 100);

	for(i = 0; i < n; i++)
	{
		printf("saisir la valeur T[%d] : ", i);
		scanf("%f", &tab[i]);
	}

	for(j = 0; j < n; j++)
	{
		for(int l = j + 1; l < n; l++)
		{
			if(tab[j] > tab[l])
			{
				aux = tab[j];
				tab[j] = tab[l];
				tab[l] = aux;
			}
		}
	
	}

	printf("\nle tableau trier est : [ ");
	
	int m = 0;
	for(k = 0; k < n; k++)
	{
		printf("%.2f", tab[k]);
		
		if(k < n - 1)
		{
			printf(", ");
		}
	}

	printf(" ]\n");

	return 0;

}
