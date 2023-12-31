/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:04:43 by lribette          #+#    #+#             */
/*   Updated: 2023/12/11 18:41:13 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# ifndef DIVISION
#  define DIVISION 10
# endif

# include "Printf/ft_printf.h"
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

typedef struct s_list
{
	int	*liste;
	int	*index;
	int	len;
}	t_list;

int			ft_ischar(char *str);
void		ft_main_split(int argc, char **argv, t_list *a, t_list *b);
int			*ft_calloc(int nbelem, int size);
int			ft_split(char *s, char c, t_list *a, t_list *b);
int			ft_strlen(const char *s);
int			ft_atoi(char *nptr, int i, t_list *a, t_list *b);
int			ft_atoi_for_one(char *nptr, int i);
int			imin(t_list *a);
int			imax(t_list *a);
int			where_index(t_list *a, int index);
void		ft_error(void);
void		ft_free(t_list *a, t_list *b);
void		ft_end_free(t_list *a, t_list *b);
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
void		ft_index(t_list *a, t_list *b);
int			sort_left_to_right(t_list *a, t_list *b);
void		sort_3_values(t_list *a);
int			closest_value(t_list *a, t_list *b);
void		sort_supplement(t_list *a, t_list *b, int supplement);
void		high_five(t_list *a, t_list *b);
void		ending_sort(t_list *a, t_list *b);
int			already_sorted(t_list *a);
void		main_sort(t_list *a, t_list *b);

#endif