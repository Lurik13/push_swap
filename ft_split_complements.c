/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_complements.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:47:51 by lribette          #+#    #+#             */
/*   Updated: 2023/11/27 14:04:58 by lribette         ###   ########.fr       */
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

static void	ft_ischar(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if ((str[i] >= '0' && str[i] <= '9') || str[i] == ' '
			|| (str[i] == '-' && str[i + 1] >= '0' && str[i] <= '9'))
			continue ;
		else
			ft_error();
	}
}

static int	ft_check_dupli(char **to_split)
{
	int	i;
	int	j;
	int	k;
	int	same;

	i = -1;
	same = 0;
	while (to_split[++i])
	{
		j = i;
		while (to_split[++j])
		{
			if (to_split[i][0] == to_split[j][0] && j < ft_listlen(to_split))
			{
				k = 1;
				while ((to_split[i][k] == to_split[j][k])
					&& (to_split[i][k] && to_split[j][k]))
					k++;
				if (to_split[i][k - 1] == to_split[j][k - 1]
					&& (!to_split[i][k] && !to_split[j][k]))
					same = 1;
			}
		}
	}
	return (same);
}

char	**ft_main_split(int argc, char **argv)
{
	int		i;
	char	*to_join;
	char	**to_split;

	i = 1;
	to_join = argv[i];
	while (++i < argc)
		to_join = ft_strjoin(to_join, argv[i], i);
	ft_ischar(to_join);
	to_split = ft_split(to_join, ' ');
	if (i != 2)
		free(to_join);
	if (ft_check_dupli(to_split) == 1)
		ft_error();
	return (to_split);
}

//tient dans un int ou s'il y a des doublons