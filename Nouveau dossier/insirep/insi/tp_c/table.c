#include <stdio.h>

int	main()
{
	int	a, b;

	printf ("table:");
	scanf ("%d", &a);

	for (b = 1; b <= 10; ++b);
	{
		printf ("%d * %d = %d",a, b ,a*b);
	}
	return 0;
}
