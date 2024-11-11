/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retahri <retahri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:19:30 by retahri           #+#    #+#             */
/*   Updated: 2024/11/06 08:16:54 by retahri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*ptr_dst;
	const char	*ptr_src;

	ptr_dst = (char *)dst;
	ptr_src = (const char *)src;
	i = 0;
	if (!src && !dst)
		return (NULL);
	if (ptr_dst > ptr_src)
	{
		while (len-- > 0)
		{
			ptr_dst[len] = ptr_src[len];
		}
	}
	else
	{
		while (i < len)
		{
			ptr_dst[i] = ptr_src[i];
			i++;
		}
	}
	return (dst);
}
