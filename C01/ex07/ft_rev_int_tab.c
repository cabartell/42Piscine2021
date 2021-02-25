/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartell <cbartell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 12:33:21 by cbartell          #+#    #+#             */
/*   Updated: 2021/02/15 18:25:38 by cbartell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int rev_i;
	int j;

	i = 0;
	rev_i = size - 1;
	while (i < (size / 2))
	{
		j = tab[i];
		tab[i] = tab[rev_i];
		tab[rev_i] = j;
		i++;
		rev_i--;
	}
}
