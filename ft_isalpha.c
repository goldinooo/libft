/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retahri <retahri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:36:16 by retahri           #+#    #+#             */
/*   Updated: 2024/10/29 02:21:26 by retahri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>
// int main(void)
// {
// 	printf("%d\n", isalpha(97));
// 	printf("%d\n", ft_isalpha(97));
// 	printf("%d\n", isalpha(0));
// 	printf("%d\n", ft_isalpha(0));
// 	printf("%d\n", isalpha(NULL));
// 	printf("%d\n", ft_isalpha(NULL));
// }