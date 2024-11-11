/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retahri <retahri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:07:23 by retahri           #+#    #+#             */
/*   Updated: 2024/11/06 08:01:29 by retahri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*ptr_dst;
	const unsigned char	*ptr_src;

	if (dst == src)
		return (dst);
	if (n == 0)
		return (dst);
	ptr_dst = (unsigned char *)dst;
	ptr_src = (const unsigned char *)src;
	while (n > 0)
	{
		*(ptr_dst++) = *(ptr_src++);
		n--;
	}
	return (dst);
}
