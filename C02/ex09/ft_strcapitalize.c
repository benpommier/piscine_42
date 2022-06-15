/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:40:52 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/13 14:40:56 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strupcase(char *str, int counter)
{
	str[counter] = str[counter] - 32;
	return (str);
}

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

char	*ft_strcapitalize(char *str)
{
	int	counter;

	str = ft_strlowcase(str);
	counter = 0;
	if (97 <= str[counter] && str[counter] <= 122)
		ft_strupcase(str, counter);
	while (str[counter] != '\0')
	{
		if ((0 <= str[counter] && str[counter] <= 47)
			|| (58 <= str[counter] && str[counter] <= 64)
			|| (91 <= str[counter] && str[counter] <= 96)
			|| 123 <= str[counter])
		{
			if (97 <= str[counter + 1] && str[counter + 1] <= 122)
			{
				ft_strupcase(str, counter + 1);
				counter++;
			}
			counter++;
		}
		else
			counter++;
	}
	return (str);
}
