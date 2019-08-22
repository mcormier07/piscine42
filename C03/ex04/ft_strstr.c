/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcormier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 14:59:31 by mcormier          #+#    #+#             */
/*   Updated: 2019/08/19 11:31:18 by mcormier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_match(char *str, char *to_find)
{
	while (*str && *to_find && *str == *to_find)
	{
		str++;
		to_find++;
	}
	return (!(*to_find));
}

char	*ft_strstr(char *str, char *to_find)
{
	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
			if (ft_match(str, to_find))
				return (str);
		str++;
	}
	return (0);
}
