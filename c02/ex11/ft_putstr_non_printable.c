/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:32:17 by hwahmane          #+#    #+#             */
/*   Updated: 2023/08/23 11:27:08 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 31 && str[i] < 127))
		{
			putchar('\\');
			putchar("0123456789abcdef"[(unsigned char)str[i] / 16]);
			putchar("0123456789abcdef"[(unsigned char)str[i] % 16]);
		}
		else
		{
			putchar(str[i]);
		}
		i++;
	}
}
