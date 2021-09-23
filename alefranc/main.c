/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:38:44 by exam              #+#    #+#             */
/*   Updated: 2021/09/23 15:54:23 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	int n;
	int v;
	char *addr;

	n = 1;
	v = 1;
	addr = &c;

	write(n, addr, v);
}

int main()
{
	char letters[] = "Heloword";

	int i = 0;
	while (i < 20)
	{
		if (i == 0)
		{
			ft_putchar(letters[0]);
		}
		else if (i == 1)
		{
			ft_putchar(letters[1]);	
		}
		else if (i == 2)
		{
			ft_putchar(letters[2]);
		}
		else if (i == 3)
		{
			ft_putchar(letters[2]);
		}
		else if (i == 4)
		{
			ft_putchar(letters[3]);
		}
		i++;
	}
	write(1," world!",7);
	ft_putchar('\n');
}
