#include "../printf/ft_printf.h"
#include <stddef.h>
#include <stdio.h>

void	ft_putnbr(int n)
{
	unsigned int	i;
	char			c;

	if (n < 0)
	{
		write(1, "-", 1);
		i = (unsigned int)(-n);
	}
	else
		i = (unsigned int)n;
	if (i / 10 != 0)
		ft_putnbr((int)(i / 10));
	c = i % 10 + '0';
	write(1, &c, 1);
}

void singletestc(char a)
{
	printf("##########################");
	printf("\n  / vrai fonction %%c c : ");
	printf(" / nb caracteres : %i", printf("%c", a));
	ft_printf(" ma fonction %%c c : ");
	printf("\n / ma fonction nb carac : %i", ft_printf("%c", a));
	printf("\n##########################\n");
}

void singletests(char *a)
{
	printf("\n / vrai printf %%s s : ");
	printf(" / nb caracteres : %i", printf("%s", a));
	ft_printf(" ma fonction %%s s : ");
	printf("\n / ma fonction nb carac : %i", ft_printf("%s", a));
	printf("\n##########################");
}

void singletestp(void *a)
{
	printf("\n / vrai printf %%p p : ");
	printf(" / nb caracteres : %i", printf("%p", a));
	ft_printf(" ma fonction %%p p : ");
	printf("\n / ma fonction nb carac : %i", ft_printf("%p", a));
	printf("\n##########################");
}

void singletestd(int a)
{
	printf("\n / vrai printf %%d d : ");
	printf(" / nb caracteres : %i", printf("%d", a));
	ft_printf(" ma fonction %%d d : ");
	printf("\n / ma fonction nb carac : %i", ft_printf("%d", a));
	printf("\n##########################");
}

void singletesti(int a)
{
	printf("\n / vrai printf %%i i : ");
	printf(" / nb caracteres : %i", printf("%i", a));
	ft_printf(" ma fonction %%i i : ");
	printf("\n / ma fonction nb carac : %i", ft_printf("%i", a));
	printf("\n##########################");
}

void singletestu(unsigned int a)
{
	printf("\n / vrai printf %%u u : ");
	printf(" / nb caracteres : %u", printf("%u", a));
	ft_printf(" ma fonction %%u u : ");
	printf("\n / ma fonction nb carac : %u", ft_printf("%u", a));
	printf("\n##########################");
}

void singletestx(int a)
{
	printf("\n / vrai pirintf %%x x : ");
	printf(" / nb caracteres : %x", printf("%x", a));
	ft_printf(" ma fonction %%x x : ");
	printf("\n / ma fonction nb carac : %x", ft_printf("%x", a));
	printf("\n##########################");
}



int main(void)
{
	char			c = 'c';
	char			*s = "Bonjour";
	void			*p = "-1";
	int				d = 12;
	int				i = 56;
	unsigned int	u = 78;
	unsigned long int	x = 0x9012345678900000;
//	int				resu;

	singletestc(c);
	singletests(s);
//	singletests(NULL);
	singletestp(p);
	singletestp((void *)16);
	singletestd(d);
	singletesti(i);
	singletestu(u);
	singletestu((unsigned int)-1);
	singletestu((unsigned int)-16);
	singletestu((unsigned int)-101);
	singletestx(x);

	printf("\n\n\n$$$$$$$$$$$$$$$$\n");

printf(" / %d\n", ft_putnbr_ui_base((unsigned long int)-9223372036854775807, "1234567890abcdef"));
printf(" / %d\n", ft_putnbr_ui_base((unsigned long int)-1, "1234567890abcdef"));
printf(" / %d\n", ft_putnbr_ui_base((unsigned long int)9223372036854775807, "1234567890abcdef"));
	printf("\n\n test d'erreur\n");
	printf(" trop de parametres %c ", c, c);
	printf(" trop peu de parametres %c %c ", c);
}
