/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 15:17:48 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/14 15:17:49 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	int	counter;

	counter = 0;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (counter < 46350)
	{
		if (counter * counter == nb)
			return (counter);
		counter++;
	}
	return (0);
}
