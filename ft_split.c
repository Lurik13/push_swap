/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:35:40 by lribette          #+#    #+#             */
/*   Updated: 2023/11/29 14:24:51 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_count_words(const char *s, char c)
{
	unsigned int	number;
	unsigned int	i;
	unsigned int	isword;

	number = 0;
	i = -1;
	isword = 0;
	while (s[++i])
	{
		if (s[i] != c && isword == 0)
		{
			number++;
			isword = 1;
		}
		else if (s[i] == c && isword == 1)
			isword = 0;
	}
	return (number);
}

/*static char	*ft_worddup(const char *s, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}*/

int	ft_split(char const *s, char c, t_list *a, t_list *b)
{
	int		i;
	int		j;
	int		index;

	a->liste = malloc((ft_count_words(s, c)) * sizeof(int *));
	b->liste = malloc((ft_count_words(s, c)) * sizeof(int *));
	if (!s || !a)
		return (0);
	i = -1;
	j = 0;
	index = -1;
	while (++i <= (int)ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == (int)ft_strlen(s)) && index >= 0)
		{
			a->liste[j] = ft_atoi(s, index);
			index = -1;
			j++;
		}
	}
	a->len = j;
	b->len = 0;
	return (1);
}

/*char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;
	int		index;

	split = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (NULL);
	i = -1;
	j = 0;
	index = -1;
	while (++i <= (int)ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == (int)ft_strlen(s)) && index >= 0)
		{
			split[j++] = ft_worddup(s, index, i);
			index = -1;
		}
	}
	split[j] = 0;
	return (split);
}*/