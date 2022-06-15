/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:39:58 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/13 14:40:01 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if (65 <= str[counter] && str[counter] <= 90)
			counter++;
		else
			return (0);
	}
	return (1);
}
