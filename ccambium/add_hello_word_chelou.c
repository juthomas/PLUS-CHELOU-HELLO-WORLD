#include <unistd.h>

ft_putchar(char *c);
{
	write(1, &c, 1);
}

ft
int main(void)
{
	char *ph;
	char *pe;
	char *pl;
	char *po;
	char *pspace;
	char *pw;
	char *pr;
	char *pd;
	char *pnl;
	char *pex;

	*ph = "h";
	*pe = "e";
	*pl = "l";
	*po = "o";
	*pspace = " ";
	*pw = "w";
	*pr = "r";
	*pd = "d";
	*pnl = "\n";
	*pex = "!";

	ft_putchar(ph);
	ft_putchar(pe);
	ft_putchar(pl);
	ft_putchar(pl);
	ft_putchar(po);
	ft_putchar(pspace);
	ft_putchar(pw);
	ft_putchar(po);
	ft_putchar(pr);
	ft_putchar(pd);
	ft_putchar(pspace);
	ft_putchar(pex);
	ft_putchar(pnl);
}
