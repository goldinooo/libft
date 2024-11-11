/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retahri <retahri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 22:16:46 by retahri           #+#    #+#             */
/*   Updated: 2024/10/29 02:33:30 by retahri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <_ctype.h>
// int main(void)
// {
// 	printf("%d\n", isascii(97));
// 	printf("%d\n", ft_isascii(97));
// 	printf("%d\n", isascii(256));
// 	printf("%d\n", ft_isascii(256));
// 	printf("%d\n", isascii(NULL));
// 	printf("%d\n", ft_isascii(NULL));
// }