/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:04:43 by lribette          #+#    #+#             */
/*   Updated: 2023/11/30 15:37:34 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "Printf/ft_printf.h"
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

typedef struct s_list
{
	int	*liste;
	int	len;
}t_list;

void		ft_main_split(int argc, char **argv, t_list *a, t_list *b);
int			ft_split(char const *s, char c, t_list *a, t_list *b);
int			ft_strlen(const char *s);
int			ft_listlen(char **s);
int			ft_atoi(const char *nptr, int i);
void		ft_error(void);
void		sa(t_list *a, int dble);
void		sb(t_list *b, int dble);
void		ss(t_list *a, t_list *b);
void		pa(t_list *a, t_list *b);
void		pb(t_list *a, t_list *b);
void		ra(t_list *a, int dble);
void		rb(t_list *b, int dble);
void		rr(t_list *a, t_list *b);
void		rra(t_list *a, int dble);
void		rrb(t_list *b, int dble);
void		rrr(t_list *a, t_list *b);

#endif