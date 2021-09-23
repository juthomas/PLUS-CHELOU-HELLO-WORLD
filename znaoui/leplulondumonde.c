/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leplulondumonde.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:40:02 by exam              #+#    #+#             */
/*   Updated: 2021/09/23 15:49:50 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	h_print_h(void)
{
	write(1, "h", 1);
}

void    e_print_e(void)
{
    write(1, "e", 1);
}

void    l_print_l(void)
{
    write(1, "l", 1);
}

void    l2_print_l2(void)
{
    write(1, "l", 1);
}

void    o_print_o(void)
{
    write(1, "o", 1);
}

void    space_print_space(void)
{
    write(1, " ", 1);
}

void    w_print_w(void)
{
    write(1, "w", 1);
}

void    o2_print_o2(void)
{
    write(1, "o", 1);
}

void    r_print_r(void)
{
    write(1, "r", 1);
}

void    l3_print_l3(void)
{
    write(1, "l", 1);
}

void    d_print_d(void)
{
    write(1, "d", 1);
}

void	space2_print_space2(void)
{
	write(1, " ", 1);
}

void	ex_print_ex(void)
{
	write(1, "!", 1);
}

void	re_print_re(void)
{
	write(1, "\n", 1);
}

int	main(void)
{
	h_print_h();
	e_print_e();
	l_print_l();
	l2_print_l2();
	o_print_o();
	space_print_space();
	w_print_w();
	o2_print_o2();
	r_print_r();
	l3_print_l3();
	d_print_d();
	space2_print_space2();
	ex_print_ex();
	re_print_re();
}
