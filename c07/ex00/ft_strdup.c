/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:53:03 by hwahmane          #+#    #+#             */
/*   Updated: 2023/09/02 16:22:17 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

char	*cpy(char *src, char	*dest)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*p;

	p = malloc(len(src) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	cpy(src, p);
	return (p);
}
