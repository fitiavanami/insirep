#include <stdio.h>

int main()
{
int n,prix_total,vola_noetina,reste,a20000,a10000,a5000,a1000,a500,a200,a100,i,prix_unitaire;
printf ("%d" ,n);
scanf ("%d",&n);
	prix_unitaire = 0;
for	(i = 1; i <= n; i++)
	printf ("%d", prix_unitaire);
	scanf ("%d",&prix_unitaire);
	prix_total = prix_total + prix_unitaire;
}	
	if (vola_noetina <= prix_total)
	{
	printf ("tsy afaka mividy");
	}
	else 
	{
	reste = vola_noetina - prix_total;
	}
	while (reste >= 20000)
	{
	a20000 = a20000 + 1;
	reste = reste - 20000;
	}
	printf("nb_billet20000ar= %d",a20000);

}
}
