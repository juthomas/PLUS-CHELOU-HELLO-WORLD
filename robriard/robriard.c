/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   robriard.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robriard <robriard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 17:25:13 by robriard          #+#    #+#             */
/*   Updated: 2021/09/23 17:40:39 by robriard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(const char *str);

typedef void (*t_func)(void);

void ft_put_H(void)
{	
	char c;

	c = 0b01001000;
	write(1, &c, 1);
}

void ft_put_e(void)
{	
	char c;

	c = 0b01100101;
	write(1, &c, 1);
}

void ft_put_l(void)
{	
	char c;

	c = 0b01101100;
	write(1, &c, 1);
}

void ft_put_o(void)
{	
	char c;

	c = 0b1101111;
	write(1, &c, 1);
}

void ft_put_space(void)
{	
	char c;

	c = 0b00100000;
	write(1, &c, 1);
}

void ft_put_W(void)
{	
	char c;

	c = 0b1010111;
	write(1, &c, 1);
}

void ft_put_r(void)
{	
	char c;

	c = 0b01110010;
	write(1, &c, 1);
}

void ft_put_d(void)
{	
	char c;

	c = 0b01100100;
	write(1, &c, 1);
}

void ft_put_truc(void)
{	
	char c;

	c = 0b00100001;
	write(1, &c, 1);
}

void ft_put_nl(void)
{	
	char c;

	c = 0b00001010;
	write(1, &c, 1);
}

t_func g_format_class[256] =
{
    ['H'] = ft_put_H,
    ['e'] = ft_put_e,
    ['l'] = ft_put_l,
    ['o'] = ft_put_o,
    [' '] = ft_put_space,
    ['W'] = ft_put_W,
    ['r'] = ft_put_r,
    ['d'] = ft_put_d,
    ['!'] = ft_put_truc,
    ['\n'] = ft_put_nl
};

int ft_putstr(char *str)
{
    int i;
    t_func f;

    i = 0;
    if (ft_strlen(str) == 1)
    {
        f = g_format_class[(int)*str];
        if (f)
        {
            f();
        }
        else
        {
            return 1;
        }
        return 0;
    }
    while (1)
    {
        if (str[i] == 0b01001000) //H
        {
            ft_putstr("H");
        }
        if (str[i] == 0b01100101) //e
        {
            ft_putstr("e");
        }
        if (str[i] == 0b01101100) //l
        {
            ft_putstr("l");
        }
        if (str[i] == 0b1101111) //o
        {
            ft_putstr("o");
        }
        if (str[i] == 0b00100000) //space
        {
            ft_putstr(" ");
        }
        if (str[i] == 0b1010111) //W
        {
            ft_putstr("W");
        }
        if (str[i] == 0b01110010)//r
        {
            ft_putstr("r");
        }
        if (str[i] == 0b01100100) //d
        {
            ft_putstr("d");
        }
        if (str[i] == 0b00100001) //truc
        {
            ft_putstr("!");
        }
        if (str[i] == 0b1010) //nl
        {
            ft_putstr("\n");
        }
        if (i < ft_strlen(str))
        {
            i++;
        }
        else
        {
            break;
        }
        
    }
	return (0);
}

int ft_strlen(const char *str)
{
    const unsigned long int *long_ptr;
    const char *str_ptr;
    unsigned long int lobit, hibit, longword;

    str_ptr = str;
    while ((unsigned long int)str_ptr & (sizeof(unsigned long) - 1))
        if (*(str_ptr++) == 0)
            return (str_ptr - str - 1);
    lobit = 0x01010101;
    hibit = 0x80808080;
    if (sizeof(longword) > 4)
    {
        hibit |= (hibit << 0x10) << 0x10;
        lobit |= (lobit << 0x10) << 0x10;
    }
    long_ptr = (const unsigned long *)str_ptr;
    while (1)
    {
        longword = *(long_ptr++);
        if (((longword - lobit) & ~longword & hibit) != 0)
        {
			str_ptr = (const char *)(long_ptr - 1);
            if (str_ptr[0] == 0)
                return (str_ptr - str);
            if (str_ptr[1] == 0)
                return (str_ptr - str + 1);            
            if (str_ptr[2] == 0)
                return (str_ptr - str + 2);
            if (str_ptr[3] == 0)
                return (str_ptr - str + 3);
            if (sizeof(longword) > 4)
            {
                if (str_ptr[4] == 0)
                    return (str_ptr - str + 4);
                if (str_ptr[5] == 0)
                    return (str_ptr - str + 5);            
                if (str_ptr[6] == 0)
                    return (str_ptr - str + 6);
                if (str_ptr[7] == 0)
                    return (str_ptr - str + 7);
            }
        }
    }
    return (0);
}

int main(int ac, char **av)
{
	(void)ac;
	(void)av;
    ft_putstr("Hello World!\n");
	return (0);
}
