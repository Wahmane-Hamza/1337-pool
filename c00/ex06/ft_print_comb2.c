/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:27:06 by hwahmane          #+#    #+#             */
/*   Updated: 2023/08/17 16:08:11 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	write_s(int i)
{
	int	x;
	int	y;

	x = (i / 10) + 48;
	y = (i % 10) + 48;
	write(1, &x, 1);
	write(1, &y, 1);
}

void	space_comma(int i)
{	
	if (i != 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			write_s(i);
			write(1, " ", 1);
			write_s(j);
			space_comma(i);
			j++;
		}
	i++;
	}
}
