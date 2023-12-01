/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:04:43 by lribette          #+#    #+#             */
/*   Updated: 2023/12/01 18:35:41 by lribette         ###   ########.fr       */
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
	int	*index;
	int	len;
}t_list;

void		ft_main_split(int argc, char **argv, t_list *a, t_list *b);
int			ft_split(char *s, char c, t_list *a, t_list *b);
int			ft_strlen(const char *s);
int			ft_listlen(char **s);
int			ft_atoi(char *nptr, int i, t_list *a, t_list *b);
void		ft_error(void);
void		ft_free(t_list *a, t_list *b);
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
void    	init(t_list *a, t_list *b);

#endif