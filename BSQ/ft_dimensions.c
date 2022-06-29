/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dimension.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 14:22:20 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/28 14:22:23 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib.h"

int	ft_strlen_backslash(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0' && str[counter] != '\n')
		counter++;
	return (counter);
}

int	nb_line(char *str)
{
	int	counter;
	int	resultat;
	int	i;

	counter = 0;
	resultat = 0;
	i = 3;
	while (48 <= str[counter] && str[counter] <= 57)
	{
		if (str[counter + i] != '\n')
			resultat = resultat * 10 + str[counter] - 48;
		else
			i--;
		counter++;
	}
	return (resultat);
}

int	nb_col(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (str[i] != '\n' && (str[0] >= '0' && str[0] <= '9'))
		i++;
	i++;
	while (str[i + x] != '\n')
		x++;
	return (x);
}
