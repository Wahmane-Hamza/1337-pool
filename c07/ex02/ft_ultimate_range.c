/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:15:16 by hwahmane          #+#    #+#             */
/*   Updated: 2023/09/02 16:29:53 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	m;
	int	i;
	int	j;

	*range = malloc(sizeof(int) * (max - min));
	m = max - min;
	i = 0;
	while (i < m)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (m);
}
