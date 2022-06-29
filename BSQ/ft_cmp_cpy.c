/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmp_cpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:49:29 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/29 16:36:24 by lulaens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib.h"

char	*ft_strncpy(char *dest, char *src, unsigned int n, unsigned int j)
{
	unsigned int	i;

	i = 0;
	while (src[j] != '\0' && i < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	while (i < n)
	{	
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	ft_pos_sign(char *str, unsigned int n)
{
	unsigned int	j;

	j = 0;
	while (str[j + 3] != '\n' && j < n)
		j++;
	return (j);
}

int	ft_strcmp(char *dest, char *str, int len_1st_lin)
{
	unsigned int	i;

	i = 0;
	if ((dest[1] == dest[2])
		|| (dest[2] == dest[3])
		|| (dest[1] == dest[3]))
		return (0);
	while (str[len_1st_lin])
	{
		if ((str[len_1st_lin] == dest[i])
			|| (str[len_1st_lin] == dest[i + 1]))
			len_1st_lin++;
		else if (str[len_1st_lin] == '\n')
			len_1st_lin++;
		else
			return (0);
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
