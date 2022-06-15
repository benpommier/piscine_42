/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:40:29 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/13 14:40:32 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (65 <= str[counter] && str[counter] <= 90)
		{
			str[counter] = str[counter] + 32;
		}
		counter++;
	}
	return (str);
}
