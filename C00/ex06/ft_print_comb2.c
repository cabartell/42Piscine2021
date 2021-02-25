/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartell <cbartell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 12:07:55 by cbartell          #+#    #+#             */
/*   Updated: 2021/02/11 17:18:22 by cbartell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_nums(int a)
{
	int b;

	b = (a / 10) + '0';
	a = (a % 10) + '0';
	ft_putchar(b);
	ft_putchar(a);
}

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = -1;
	while (x++ <= 98)
	{
		y = x;
		while (y++ <= 98)
		{
			ft_print_nums(x);
			ft_putchar(' ');
			ft_print_nums(y);
			if (x != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
