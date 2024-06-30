/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:37:34 by hwahmane          #+#    #+#             */
/*   Updated: 2023/08/23 19:08:30 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	x;

	if (nb < 0)
	{
		return (0);
	}
	x = 1;
	while (nb > 0)
	{
		x = x * nb;
		nb--;
	}
	return (x);
}
