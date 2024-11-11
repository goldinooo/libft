/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retahri <retahri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:34:43 by retahri           #+#    #+#             */
/*   Updated: 2024/11/02 11:07:18 by retahri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (!dst || dstsize == 0)
		return (src_len);
	if (src_len + 1 < dstsize)
		ft_memcpy(dst, src, src_len + 1);
	else
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (src_len);
}
// #include <string.h>
// int main()
// {
//     char dst[10];
// 	char dst2[10];
//     size_t len;
// 	size_t len2;

//     len = ft_strlcpy(dst, NULL, 0);
//     printf("m: %s, %lu\n", dst, len);

// 	len2 = strlcpy(dst2, "NULL", 0);
// 	printf("0: %s, %lu\n", dst2, len2);
//     return (0);
// }