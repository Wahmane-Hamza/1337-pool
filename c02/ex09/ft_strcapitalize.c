/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 14:09:32 by hwahmane          #+#    #+#             */
/*   Updated: 2023/08/20 15:32:07 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	j;

	lowcase(str);
	j = 0;
	while (str[j])
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
		else if ((str[j] >= 'a' && str[j] <= 'z')
			&& (str[j - 1] < 'a' || str[j - 1] > 'z')
			&& (str[j - 1] < 'A' || str[j - 1] > 'Z')
			&& (str[j - 1] < '0' || str[j - 1] > '9'))
						str[j] -= 32;
		j++;
	}
	return (str);
}
