/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:04:43 by lribette          #+#    #+#             */
/*   Updated: 2023/11/24 12:26:29 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct  s_list
{
	int *liste_a;
	int *liste_b;   
}				t_list;

#include "Printf/ft_printf.h"
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

char	**ft_split(char const *s, char c);
char	**ft_main_split(int argc, char **argv);
char	*ft_strjoin(char *s1, char const *s2, int x);
int	ft_strlen(const char *s);
int ft_listlen(char **s);
void	ft_error(void);

#endif