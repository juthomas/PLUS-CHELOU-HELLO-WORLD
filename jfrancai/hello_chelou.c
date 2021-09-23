#include <stdlib.h>
#include <unistd.h>
char *affiche_h(char c)
{
	write(1, &c, 1);
	return c;
}
char *affiche_e(char c)
{
	write(1, &c, 1);
	return c;
}
char *affiche_l(char c)
{
	write(1, &c, 1);
	return c;
}
char *affiche_l(char c)
{
	write(1, &c, 1);
	return c;
}
char *affiche_o(char c)
{
	write(1, &c, 1);
	return c;
}
char *affiche_0(char c)
{
	write(1, &c, 1);
	return c;
}
int main(void)
{
	char *hello;
	hello = (char *)malloc(sizeof(char) * 6);
  	hello[0] = 'h';
  	hello[1] = 'e';
  	hello[2] = 'l';
  	hello[3] = 'l';
  	hello[4] = 'o';
  	hello[5] = '\0';
	affiche_h('h');
	affiche_e('e');
	affiche_l('l');
	affiche_l('l');
	affiche_o('o');
	affiche_0('h');
	write(1, " world", 6);
	free(hello);
}

