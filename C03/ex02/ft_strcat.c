/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartell <cbartell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 09:17:30 by cbartell          #+#    #+#             */
/*   Updated: 2021/02/18 18:59:57 by cbartell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (dest[count])
		count++;
	while (src[i])
	{
		dest[count] = src[i];
		i++;
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
