/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:35:40 by lribette          #+#    #+#             */
/*   Updated: 2023/11/24 12:01:26 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_ischar(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if ((str[i] >= '0' && str[i] <= '9') || str[i] == ' ' || str[i] == '-')
			continue ;
		else
			ft_error();
	}
}

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

static char	*ft_worddup(const char *s, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
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
}

char		**ft_main_split(int argc, char **argv)
{
	int	i;
	char	*to_join;
	char	**to_split;

	i = 1;
	to_join = argv[i];
	while (++i < argc)
		to_join = ft_strjoin(to_join, argv[i]);
	ft_ischar(to_join);
	to_split = ft_split(to_join, ' ');
	free(to_join);
	return (to_split);
}
