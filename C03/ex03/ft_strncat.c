/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartell <cbartell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 09:17:37 by cbartell          #+#    #+#             */
/*   Updated: 2021/02/18 20:05:27 by cbartell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int count;

	i = 0;
	count = 0;
	while (dest[count])
		count++;
	while (src[i] && i < nb)
	{
		dest[count] = src[i];
		i++;
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
