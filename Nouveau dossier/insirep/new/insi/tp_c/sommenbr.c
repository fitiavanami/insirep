#include <stdio.h>
int	main()
	{
	int	n;
	int	somme = 0;
	int	a;

	printf ("n:");
	scanf("%d", &n);

	while (n != 0)
	{
	a = n % 10;
	somme += a;
	n /= 10;
	}
	{
	printf ("%d",somme);
	}
	return 0;
}
