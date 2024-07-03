/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:30:03 by hwahmane          #+#    #+#             */
/*   Updated: 2023/09/04 15:50:08 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	len(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

char	*cpy(char *src, char	*dest)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*p;

	p = malloc(len(src) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	cpy(src, p);
	return (p);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	int					size;
	struct s_stock_str	*x;

	x = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (x == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < ac)
	{
		x[i].size = len(av[i]);
		x[i].str = ft_strdup(av[i]);
		x[i].copy = ft_strdup(av[i]);
		i++;
	}
	x[i].str = 0;
	return (x);
}
