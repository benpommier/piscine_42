/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:39:36 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/13 14:39:39 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if (48 <= str[counter] && str[counter] <= 57)
			counter++;
		else
			return (0);
	}
	return (1);
}
