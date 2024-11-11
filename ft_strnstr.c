/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retahri <retahri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 01:00:52 by retahri           #+#    #+#             */
/*   Updated: 2024/11/02 12:46:29 by retahri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	idx_hay;
	size_t	idx_nedl;

	idx_hay = 0;
	idx_nedl = 0;
	if (!*needle)
		return ((char *)haystack);
	if (!*haystack)
		return (NULL);
	while (haystack[idx_hay] && idx_hay < len)
	{
		while (haystack[idx_hay + idx_nedl] == needle[idx_nedl]
			&& haystack[idx_hay + idx_nedl] && idx_nedl + idx_hay < len)
		{
			idx_nedl++;
			if (needle[idx_nedl] == '\0')
				return ((char *)haystack + idx_hay);
		}
		idx_hay++;
		idx_nedl = 0;
	}
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char *str = "reda";
//     char *to = "re";

//     printf("O: %s\n", strnstr(str, to, 1));
//     printf("M: %s\n", ft_strnstr(str, to, 1));
// }