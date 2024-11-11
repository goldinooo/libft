/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retahri <retahri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:11:54 by retahri           #+#    #+#             */
/*   Updated: 2024/10/29 02:38:34 by retahri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>
// int main(void)
// {
// 	printf("%d\n", isprint(48));
// 	printf("%d\n", ft_isprint(48));
// 	printf("%d\n", isprint(32));
// 	printf("%d\n", ft_isprint(32));
// 	printf("%d\n", isprint(NULL));
// 	printf("%d\n", ft_isprint(NULL));
// }