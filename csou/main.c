#include <unistd.h>

int	main()
{
	char array[12];
	int i;

	array[0] = 'h';
	array[1] = 'e';
	array[2] = 'l';
	array[3] = 'l';
	array[4] = 'o';
	array[5] = ' ';
	array[6] = 'w';
	array[7] = 'o';
	array[8] = 'r';
	array[9] = 'l';
	array[10] = 'd';
	array[11] = '!';
	array[12] = '\0';
	if (array[0] >= 'a' && array[0] <= 'z')
	{
		array[0] = array[0] - 32;
	}
	while (array[i] != '\0')
	{
		write(1, &array[i], 1);
		i++;
	}
	return (0);
}
