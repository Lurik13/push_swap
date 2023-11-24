/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:01:47 by lribette          #+#    #+#             */
/*   Updated: 2023/11/24 12:27:28 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strjoin(char *s1, char const *s2, int x)
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