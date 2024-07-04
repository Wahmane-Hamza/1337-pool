/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:24:27 by hwahmane          #+#    #+#             */
/*   Updated: 2023/09/07 11:50:41 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	cheak_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	word_count(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && cheak_sep(str[i], charset))
		{
			i++;
		}
		if (str[i] && !cheak_sep(str[i], charset))
		{
			count++;
		}
		while (str[i] && !cheak_sep(str[i], charset))
		{
			i++;
		}
	}
	return (count);
}

int	word_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !cheak_sep(str[i], charset))
	{
		i++;
	}
	return (i);
}

char	*word_cpy(char *str, char *charset)
{
	int		i;
	int		len_word;
	char	*word;

	i = 0;
	len_word = word_len(str, charset);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**result;

	i = 0;
	j = 0;
	result = (char **)malloc(sizeof(char *) * (word_count(str, charset) + 1));
	while (str[i])
	{
		while (str[i] && cheak_sep(str[i], charset))
			i++;
		if (str[i] && !cheak_sep(str[i], charset))
		{
			result[j] = word_cpy(&str[i], charset);
			j++;
		}
		while (str[i] && !cheak_sep(str[i], charset))
			i++;
	}
	result[j] = NULL;
	return (result);
}
