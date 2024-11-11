/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retahri <retahri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:07:36 by retahri           #+#    #+#             */
/*   Updated: 2024/11/04 15:12:30 by retahri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_size(int nb)
{
	int	count;

	count = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		count++;
		nb *= -1;
	}
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	size = ft_check_size(n);
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	str[size] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[--size] = (n % 10) + 48;
		n /= 10;
	}
	return (str);
}

// int main()
// {
// 	// printf("%d", ft_check_size(02345));
// 	char *arr;
// 	arr = ft_itoa(-2147483647);
// 	printf("%s", arr);
// 	free(arr);
// }