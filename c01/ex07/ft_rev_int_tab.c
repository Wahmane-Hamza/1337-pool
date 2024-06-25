/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 12:31:08 by hwahmane          #+#    #+#             */
/*   Updated: 2023/08/20 15:46:00 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	len;
	int	cup;

	i = 0;
	len = size / 2;
	while (i < len)
	{
		cup = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = cup;
		i++;
		size--;
	}
}
