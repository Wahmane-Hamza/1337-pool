/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:35:23 by hwahmane          #+#    #+#             */
/*   Updated: 2023/09/02 16:30:12 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	lenstr(int size, char **str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while ((str)[i][j])
		{
			j++;
		}
		k += j;
		i++;
	}
	return (k);
}

int	lensep(int size, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		i++;
	}
	return (i * (size - 1));
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

void	put(int size, char *result, char **strs, char *sep)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i != size - 1)
		{
			ft_strcat(result, sep);
		}
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	char	*empty;

	if (size == 0)
	{
		empty = malloc(1);
		if (empty == NULL)
			return (NULL);
		empty[0] = 0;
		return (empty);
	}
	result = malloc(lenstr(size, strs) + lensep(size, sep) + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	put(size, result, strs, sep);
	return (result);
}
