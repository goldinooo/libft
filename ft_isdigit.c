/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retahri <retahri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:32:58 by retahri           #+#    #+#             */
/*   Updated: 2024/10/29 02:22:11 by retahri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>
// int main(void)
// {
// 	printf("%d\n", isdigit(48));
// 	printf("%d\n", ft_isdigit(48));
// 	printf("%d\n", isdigit(0));
// 	printf("%d\n", ft_isdigit(0));
// 	printf("%d\n", isdigit(NULL));
// 	printf("%d\n", ft_isdigit(NULL));
// }