/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:07:00 by hwahmane          #+#    #+#             */
/*   Updated: 2023/08/26 21:33:56 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	x;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	i = 0;
	x = 1;
	while (i < power)
	{
		x *= nb;
		i++;
	}
	return (x);
}
