#include <fcntl.h>
#include <unistd.h>

#define SIZE 512

int		ft_strlen(char *str)
{
	int		i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int ft_strcmp(char *a, char *b)
{
	while (*a && *b && *a == *b)
	{
		++a;
		++b;
	}
	return (*a - *b);
}

int main(int ac, char **av)
{
	int		fd;
	char	buffer[SIZE];

	(void)ac;
	(void)av;
	fd = open("./main.c", O_RDONLY);
	read(fd, buffer, 12);
	buffer[13] = 0;
	buffer[0] += 37;
	buffer[1] = buffer[0] + 29;
	buffer[2] = buffer[1] + 7;
	buffer[3] = buffer[2];
	buffer[4] = 'o' > 'O' ? 'o' : 'z';
	buffer[5] = ' ';
	buffer[6] = 'W';
	buffer[7] = 'o';
	buffer[8] = 'r';
	buffer[9] = 'l';
	buffer[10] = 'd';
	buffer[11] = '!';
	if (ft_strcmp(buffer, "Hello World!") == 0)
	{
		ft_putstr(buffer);
		write(1, "\n", 1);
	}
	return (0);
}