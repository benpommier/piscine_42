/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 12:31:36 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/12 12:32:18 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		counter++;
	}
	return (counter);
}

char	*ft_strcat(char *dest, char *src)
{
	int	counter;
	int	len_dest;

	len_dest = ft_strlen(dest);
	counter = 0;
	while (src[counter] != '\0')
	{
		dest[len_dest + counter] = src[counter];
		counter++;
	}
	dest[len_dest + counter] = '\0';
	return (dest);
}
