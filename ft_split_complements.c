/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_complements.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:47:51 by lribette          #+#    #+#             */
/*   Updated: 2023/12/08 19:26:28 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	*ft_strjoin(char *s1, char const *s2, int x)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;
	size_t	j;
	char	*str;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	i = -1;
	j = -1;
	str = malloc(len_s1 + len_s2 + 2);
	if (!str)
		return (NULL);
	while (s1[++i])
		str[i] = s1[i];
	str[i] = ' ';
	while (s2[++j])
		str[i + j + 1] = s2[j];
	str[i + j + 1] = '\0';
	if (x != 2)
		free(s1);
	return (str);
}

int	ft_ischar(char *str)
{
	int	i;
	int	error;

	i = -1;
	error = 0;
	while (str[++i])
	{
		if ((str[i] >= '0' && str[i] <= '9') || str[i] == ' '
			|| (str[i] == '-' && str[i + 1] >= '0' && str[i + 1] <= '9'))
			continue ;
		else
		{
			error = 1;
			break ;
		}
	}
	return (error);
}

static void	ft_check_dupli(t_list *a, t_list *b)
{
	int	i;
	int	j;

	i = -1;
	while (++i < a->len - 1 && a->liste[i])
	{
		j = i;
		while (++j < a->len && a->liste[j])
		{
			if (a->liste[i] == a->liste[j])
			{
				ft_free(a, b);
				ft_error();
			}
		}
	}
}

void	ft_main_split(int argc, char **argv, t_list *a, t_list *b)
{
	int		i;
	char	*to_join;

	i = 1;
	to_join = argv[i];
	while (++i < argc)
	{
		to_join = ft_strjoin(to_join, argv[i], i);
		if (ft_ischar(to_join))
		{
			free(to_join);
			ft_error();
		}
	}
	ft_split(to_join, ' ', a, b);
	if (i != 2)
		free(to_join);
	ft_check_dupli(a, b);
}
