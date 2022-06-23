/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 10:28:36 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/21 10:28:38 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		counter++;
	}
	return (counter);
}

char	*ft_strcat(char *dest, char *src)
{
	int	counter;
	int	len_dest;

	len_dest = ft_strlen(dest);
	counter = 0;
	while (src[counter] != '\0')
	{
		dest[len_dest + counter] = src[counter];
		counter++;
	}
	dest[len_dest + counter] = '\0';
	return (dest);
}

int	ft_strslen(char **str, int size)
{
	int	m;
	int	l;
	int	counter;

	m = 0;
	l = 0;
	counter = 0;
	while (m < size)
	{
		if (str[m][l] != '\0')
		{
			l++;
			counter++;
		}
		else
		{
			m++;
			l = 0;
		}
	}
	return (counter);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		m;
	int		nb_cepes;

	nb_cepes = ft_strlen(sep) * (size - 1);
	dest = malloc(sizeof(char) * (ft_strslen(strs, size) + nb_cepes + 1));
	if (size == 0)
		return(dest);
	m = 0;
	while (m < size)
	{
		ft_strcat(dest, strs[m]);
		if (m != size - 1)
			ft_strcat(dest, sep);
		m++;
	}
	dest[ft_strslen(strs, size) + nb_cepes] = '\0';
	return (dest);
}
