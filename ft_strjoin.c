/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retahri <retahri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:18:35 by retahri           #+#    #+#             */
/*   Updated: 2024/11/04 15:39:03 by retahri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	idx;
	size_t	size;

	if (!s1 || !s2)
	{
		if (s1)
			return (ft_strdup(s1));
		if (s2)
			return (ft_strdup(s2));
		else
			return (ft_strdup(""));
	}
	size = ft_strlen(s1) + ft_strlen(s2);
	newstr = malloc(size + 1);
	idx = 0;
	if (!newstr)
		return (NULL);
	while (*s1)
		newstr[idx++] = *s1++;
	while (*s2)
		newstr[idx++] = *s2++;
	newstr[idx] = '\0';
	return (newstr);
}

// int main()
// {
// 	char str1[] = "reda  ";
// 	char str2[] = "  tahri";
// 	char *final;
// 	final = ft_strjoin(str1, str2);
// 	printf("%s", final);
// 	free(final);
// }
