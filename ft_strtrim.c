/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retahri <retahri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:52:53 by retahri           #+#    #+#             */
/*   Updated: 2024/11/04 15:44:43 by retahri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	filter_str(const char *str, char c)
{
	size_t	idx;

	idx = 0;
	while (str[idx])
	{
		if (str[idx] == c)
			return (1);
		idx++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*copy;
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	while (s1[start] && filter_str(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	if (s1[start] == '\0')
		return (ft_strdup(""));
	while (filter_str(set, s1[end]) && (end > start))
		end--;
	copy = ft_substr (s1, start, (end - start) + 1);
	return (copy);
}

// int main()
// {
// 	char *arr;
// 	printf("%s", arr = ft_strtrim(".a.a.a.a.hbcd.a..aaa...a", ".a"));
// 	free(arr);
// }