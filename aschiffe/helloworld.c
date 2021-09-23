/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helloworld.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:37:05 by exam              #+#    #+#             */
/*   Updated: 2021/09/23 15:47:26 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>


int ft_strlen(char *str)
{
	int item;
	item = 0;
	
	while (str[item])
	{
		item++;
	}

	return (item);
}

int is_valid(char c)
{
	if (c == 'H')
		return (1);
	else if (c == 'e')
		return (1);
	else if (c == 'l')
		return (1);
	else if (c == 'l')
		return (1);
	else if (c == 'o')
		return (1);
	else if (c == ' ')
		return (1);
	else if (c == 'W')
		return (1);
	else if (c == 'o')
		return (1);
	else if (c == 'r')
		return (1);
	else if (c == 'l')
		return (1);
	else if (c == 'd')
		return (1);
	else 
		return (0);
}

void displayfile(char *str)
{
	int item;

	item = 0;
	while (str[item])
	{
		if(is_valid(str[item]))
		{
			write(1, &str[item], 1);
		}
	item++;
	}
	write(1, "\n", 1);
	return ;
}	

int main(int argc, char **argv)
{
	int size;
	char *helloworld = "Hello World !";
	size = ft_strlen(helloworld);


	if ( size == 13 )
	{
			displayfile(helloworld);
	}
	else
	{
		write(1, "ERROR", 5);
	}
	return (0);
}
