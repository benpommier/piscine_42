/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 21:11:28 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/09 10:27:22 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putcomb2(int a, int b)
{
	int	dec_a;
	int	reste_a;
	int	dec_b;
	int	reste_b;

	dec_a = (a / 10) + 48;
	reste_a = (a % 10) + 48;
	write(1, &dec_a, 1);
	write(1, &reste_a, 1);
	write(1, " ", 1);
	dec_b = (b / 10) + 48;
	reste_b = (b % 10) + 48;
	write(1, &dec_b, 1);
	write(1, &reste_b, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 99)
	{
		while (b <= 99)
		{
			ft_putcomb2(a, b);
			if (a != 98)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
		b = a + 1;
	}
}
