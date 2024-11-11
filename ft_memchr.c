/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retahri <retahri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 06:23:08 by retahri           #+#    #+#             */
/*   Updated: 2024/11/06 08:25:05 by retahri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		tofind;
	size_t				idx;

	str = (const unsigned char *)s;
	tofind = (unsigned char)c;
	idx = 0;
	while (idx < n)
	{
		if (str[idx] == tofind)
		{
			return ((char *)&str[idx]);
		}
		idx++;
	}
	return (NULL);
}
