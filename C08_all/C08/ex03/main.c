/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 12:13:19 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/23 12:14:07 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int	main(void)
{
	t_point		point;

	set_point(&point);
	return (0);
}
