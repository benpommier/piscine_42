/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulaens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 09:18:43 by lulaens           #+#    #+#             */
/*   Updated: 2022/06/29 16:36:40 by lulaens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIB_H
# define LIB_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# define BUF_SIZE 2000000

void	malloc_tab(int *i, int *j, int **tab, char *str);
void	print_tab_2(int i, int j, int **tab, char *str);
void	create_table(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_square(int i, int j, int **tab, char *str);
void	print_tab(int **tab, char *str);
void	ft_change(int i, int j, int **tab, int len);
void	ft_change_zero(int **tab, char *str);
void	reset(int *len, int *x, int *y);
int		ft_len_square_col(int i, int j, int **tab, char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *dest, char *str, int len_1st_lin);
int		check_sign_in_str(char *str);
int		ft_strlen_backslash(char *str);
int		nb_line(char *str);
int		nb_col(char *str);
int		check_all(char *str);
int		check_lig(char *str);
int		check_sign(char *str);
int		check_relation(char *str);
int		check_one(char *str);
int		ft_pos_sign(char *str, unsigned int n);
int		check_file(char *av);
char	*ft_strncpy(char *dest, char *src, unsigned int n, unsigned int j);
char	*sign(char *str);

#endif
