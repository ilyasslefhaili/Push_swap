/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilefhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:27:40 by ilefhail          #+#    #+#             */
/*   Updated: 2022/02/07 11:27:41 by ilefhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>


int	ft_atoi(const char *str);
typedef struct element {
	int value;
	struct element *next;
	int	index;
}t_element;
typedef struct head {
	t_element *first;
	int	len;
}t_head;
void ft_bable(int *a, int ac);
void	ft_index(t_element *a, int ac);
void	sorting(t_head *a, t_head *b);
void	ready_to_push(t_head *a, t_head *b, int max,int min, int thep);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int countstack(t_element *a);
void ft_push_fill(t_head *a, int nmbr);
void ft_arr(int *arr, int nbr, int e);
void fillstack(char **av, int ac, t_head *a);
int ft_strlen(char *s);
void checknumber(char **av);
void    ft_swap(t_head *a, char c);
int ft_pop(t_head *a);
void ft_push(t_head *a, t_head *b, char c);
void	ft_rotate(t_head *a, char c);
void	ft_reverse_r(t_head *a, char c);

#endif


