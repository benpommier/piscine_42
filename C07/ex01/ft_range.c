/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:28:12 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/20 11:28:15 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	counter;

	if (min >= max)
		return (0);
	tab = malloc(sizeof(int) * (max - min));
	counter = 0;
	while (min < max)
	{
		tab[counter] = min;
		min++;
		counter++;
	}
	return (tab);
}
