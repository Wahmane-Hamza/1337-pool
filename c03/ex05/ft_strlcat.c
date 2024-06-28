/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:12:21 by hwahmane          #+#    #+#             */
/*   Updated: 2023/08/24 14:30:22 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	k = 0;
	while (src[k])
	{
		k++;
	}
	if (size == 0 || size <= i)
		return (size + k);
	j = 0;
	while (src[j] != '\0' && j < size - i - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[j + i] = '\0';
	return (i + k);
}
