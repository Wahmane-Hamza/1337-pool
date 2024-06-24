/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:35:48 by hwahmane          #+#    #+#             */
/*   Updated: 2023/08/17 16:08:50 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	int	x;

	if (nb == -2147483648)
	{	
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
		ft_putnbr(nb);
	}
	else if (nb <= 9 && nb >= 0)
	{
		x = nb + 48;
		write(1, &x, 1);
	}
	else
	{
		ft_putnbr((nb / 10));
		ft_putnbr((nb % 10));
	}
}
