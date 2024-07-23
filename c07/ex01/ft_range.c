/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:24:42 by hwahmane          #+#    #+#             */
/*   Updated: 2023/09/02 16:28:06 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int	*result;
	int	m;
	int	i;

	if (min > max)
	{
		return (NULL);
	}
	result = malloc((max - min) * sizeof(int));
	if (result == NULL)
	{
		return (NULL);
	}
	m = max - min;
	i = 0;
	while (i < m)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
