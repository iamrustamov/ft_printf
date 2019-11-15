/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 21:07:33 by doberyn           #+#    #+#             */
/*   Updated: 2019/04/18 13:50:09 by doberyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;
	size_t	counter;

	str = (char *)b;
	counter = 0;
	while (counter != len)
	{
		str[counter] = (char)c;
		counter++;
	}
	return ((void *)str);
}
