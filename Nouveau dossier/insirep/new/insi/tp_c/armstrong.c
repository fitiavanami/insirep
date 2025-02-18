#include <stdio.h>
#include <math.h>

int main()
{
	int	n,reste,somme,nb_original;
	printf ("entrer n:");
	scanf ("%d",&n);
		somme = 0;
		nb_original = n;
	while (n != 0){
	reste = n % 10;
	somme += pow(reste,3);
	n = n / 10;
	}

	if (nb_original == somme)
		{
	printf("Armstrong");
		}
		else
		{
	printf("Tsy Armsrong");
		}
	return 0;

}
