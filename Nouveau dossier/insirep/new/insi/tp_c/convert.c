#include <stdio.h>

int main()
{
int	n;
int	i;
int	t[100];

printf ("entrez n:");
scanf ("%d",&n);
i = 0;
while (n != 0)
{
t[i] = n % 2;
n = n / 2;
i++;
}
for(i = i - 1; i >= 0; i--)
{
printf("%d", t[i]);
}
return 0;
}
