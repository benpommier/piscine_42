/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condition_put_4.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:56:35 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/18 14:56:59 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	condition_put_4(char *argv, int j, int i)
{
	int	o;

	o = 2 * j;
	if (argv[o] == '1' && i == 0)
		return (1);
	if (i == 3 && (j >= 0 && j <= 3))
		o = 8 + j * 2;
	if (argv[o] == '1' && i == 3)
		return (1);
	if (j == 0 && (i >= 0 && i <= 3))
		o = 16 + i * 2;
	if (argv[o] == '1' && j == 0)
		return (1);
	if (j == 3 && (i >= 0 && i <= 3))
		o = 24 + i * 2;
	if (argv[o] == '1' && j == 3)
		return (1);
	return (0);
}
