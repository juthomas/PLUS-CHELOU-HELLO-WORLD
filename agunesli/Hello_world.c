/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hello_world.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:40:21 by exam              #+#    #+#             */
/*   Updated: 2021/09/23 15:49:47 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>


int main()
{

	char *ascii;

	ascii[0] = 'H';
	ascii[1] = 'e';
	ascii[2] = 'l';
	ascii[3] = 'l';
	ascii[4] = 'o';
	ascii[5] = ' ';
	ascii[6] = 'W';
	ascii[7] = 'o';
	ascii[8] = 'r';
	ascii[9] = 'l';
	ascii[10] = 'd';
	ascii[11] = ' ';
	ascii[12] = '!';
	ascii[13] = '\n';

	write(1, &ascii[0],1);
	write(1, &ascii[1],1);
	write(1, &ascii[2],1);
	write(1, &ascii[3],1);
	write(1, &ascii[4],1);
	write(1, &ascii[5],1);
	write(1, &ascii[6],1);
	write(1, &ascii[7],1);
	write(1, &ascii[8],1);
	write(1, &ascii[9],1);
	write(1, &ascii[10],1);
	write(1, &ascii[11],1);
	write(1, &ascii[12],1);
	write(1, &ascii[13],1);

	return 0;
}



