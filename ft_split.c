/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:35:40 by lribette          #+#    #+#             */
/*   Updated: 2023/12/06 13:46:12 by lribette         ###   ########.fr       */
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

int	*ft_calloc(int nbelem, int size)
{
	int	*str;
	int	i;

	str = malloc(nbelem * size);
	if (!str)
		return (NULL);
	i = -1;
	while (++i < nbelem)
		str[i] = 0;
	return (str);
}

int	ft_split(char *s, char c, t_list *a, t_list *b)
{
	int		i;
	int		j;
	int		index;

	a->liste = ft_calloc((ft_count_words(s, c)), sizeof(int));
	b->liste = ft_calloc((ft_count_words(s, c)), sizeof(int));
	if (!s || !a || !b)
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
			a->liste[j] = ft_atoi(s, index, a, b);
			index = -1;
			j++;
		}
	}
	a->len = j;
	b->len = 0;
	return (1);
}
