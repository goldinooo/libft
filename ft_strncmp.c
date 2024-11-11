/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retahri <retahri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 22:43:10 by retahri           #+#    #+#             */
/*   Updated: 2024/10/30 06:21:19 by retahri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	idx;

	idx = 0;
	while ((s1[idx] || s2[idx]) && idx < n)
	{
		if ((unsigned char)s1[idx] != (unsigned char)s2[idx])
			return ((unsigned char)s1[idx] - ((unsigned char)s2[idx]));
		idx++;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>
// int main(void){
// 	printf("%d", ft_strncmp("abcd", "abcde", 5));
// 	printf("\n");
// 	printf("%d", strncmp("abcd", "abcde", 5));
// 	return (0);
// }