/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:40:07 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/13 14:40:10 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if (32 <= str[counter] && str[counter] <= 126)
			counter++;
		else
			return (0);
	}
	return (1);
}
