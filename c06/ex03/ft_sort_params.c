/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 13:51:49 by hwahmane          #+#    #+#             */
/*   Updated: 2023/08/28 16:30:04 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	swap(char **s1, char **s2)
{
	char	*a;

	a = *s1;
	*s1 = *s2;
	*s2 = a;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	while (i < ac - 1)
	{
		k = i + 1;
		while (k < ac)
		{
			if ((ft_strcmp(av[i], av[k])) > 0)
			{
				swap(&av[i], &av[k]);
			}
			k++;
		}
		i++;
	}
	j = 1;
	while (j < ac)
	{
		print(av[j]);
		write(1, "\n", 1);
		j++;
	}	
}
