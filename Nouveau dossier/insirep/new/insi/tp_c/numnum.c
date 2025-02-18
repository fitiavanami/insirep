# include <stdio.h>
# include <stdlib.h>

int main()
{
	int	n;
	int	str[50];
	int	somme = 0;
	int	i = 0;
	int	min;
	int 	max;
	scanf ("%d",&n);
	printf ("entrer n:");

	for (i < n, i++);
	{
	scanf ("%d";&str[i]);
	somme += str[i];
	}
	min = str[0];
	for (i < n;i++);
	{
	if (str[i] > str[i+1])
		min = str[i+1];
	}
	for (i < n ;i++);
	{
	if (str[i] < str[i+1])
		max = str[i+1];
	}
}
