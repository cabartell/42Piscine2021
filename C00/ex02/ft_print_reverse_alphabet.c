/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartell <cbartell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 10:43:32 by cbartell          #+#    #+#             */
/*   Updated: 2021/02/12 09:28:38 by cbartell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int x;

	x = 'z';
	while (x >= 'a')
	{
		write(1, &x, 1);
		x--;
	}
}
