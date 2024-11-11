/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retahri <retahri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:47:37 by retahri           #+#    #+#             */
/*   Updated: 2024/10/29 02:24:54 by retahri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
	{
		return (1);
	}
	return (0);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>
// int main(void)
// {
// 	printf("%d\n", isalnum(97));
// 	printf("%d\n", ft_isalnum(97));
// 	printf("%d\n", isalnum(0));
// 	printf("%d\n", ft_isalnum(0));
// 	printf("%d\n", isalnum(NULL));
// 	printf("%d\n", ft_isalnum(NULL));
// }