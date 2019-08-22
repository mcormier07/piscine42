/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcormier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 14:55:57 by mcormier          #+#    #+#             */
/*   Updated: 2019/08/20 09:14:39 by mcormier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int res;

	res = 1;
	if (power < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (power >= 1)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
