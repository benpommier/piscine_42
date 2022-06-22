/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 17:46:54 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/14 17:46:56 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	div;

	div = 2;
	if (nb <= 1)
		return (0);
	while (div < nb && div < 46350)
	{
		if ((nb % div) == 0)
			return (0);
		div++;
	}
	return (1);
}
