/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hello_world.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:38:45 by exam              #+#    #+#             */
/*   Updated: 2021/09/23 15:53:30 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_hello_world()
{
	int a; //H
	int b; //e
	int c; //l
	int d; //l
	int e; //o
	int f; //_
	int g; //W
	int h; //o
	int i; //r
	int j; //l
	int k; //d

	
	a = 42;
	b = 42;
	c = 42;
	d = 42;
	e = 42;
	f = 42;
	i = 42;
	j = 42;
	k = 42;
	
	a += 30;
  	b = 69;
	c = 108;
	d = 108;
	e = 111;
	f -= 10;
	g = 87;
	h = e;
	i += 72;
	j = c;
	k += 58;
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	ft_putchar(d);
	ft_putchar(e);
	ft_putchar(f);
	ft_putchar(g);
	ft_putchar(h);
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
	ft_putchar('\n');
}

int	main()
{
	ft_hello_world();
	return (0);
}
