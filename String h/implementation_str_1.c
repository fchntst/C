#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10
#define SIZE 100

void swap(char **a, char **b);

main()
{
	char *pin[N];
	int i,j;
	
	for (i=0; i<N; i++)
	{
		pin[i]=(char *)malloc(SIZE*sizeof(char));
		if (pin[i]==NULL)
		{
			printf("Error allocating memory!");
			exit(0);
		}
		printf("Dwse %d simboloseira: ", i);
		gets(pin[i]);
	}
	
	for (i=0; i<N; i++)
	{
	   for (j=N-1; j>=i+1; j--)
	   {
	      if (strcmp(pin[j],pin[j-1])<0)
	         swap(&pin[j], &pin[j-1]);
	   }
	}
	
	for (i=0; i<N; i++)
		printf("%s\n",pin[i]);
		
	/* Apodesmeusi */
	for (i=0; i<N; i++)
		free(pin[i]);	
}

void swap(char **a, char **b)
{
	char *temp;
	
	temp=*a;
	*a=*b;
	*b=temp;
}
