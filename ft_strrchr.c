/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retahri <retahri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 02:26:32 by retahri           #+#    #+#             */
/*   Updated: 2024/11/04 15:42:30 by retahri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if (c == 0)
		return ((char *)&s[len]);
	while (len >= 0)
	{
		if (s[len] == (char)c)
		{
			return ((char *)&s[len]);
		}
		len--;
	}
	return (NULL);
}

// int main(){
// 	// printf("%s", ft_strrchr(NULL, 'a'));
// 	printf("\n");
// 	printf("%s\n", strrchr("kamar", 'k'));
// 	printf("%s", ft_strrchr("kamar", 'k'));

// 	return (0);
// }