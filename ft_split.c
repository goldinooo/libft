/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retahri <retahri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:53:14 by retahri           #+#    #+#             */
/*   Updated: 2024/11/11 02:43:35 by retahri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *str, char c)
{
	size_t	counter;

	counter = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str && *str != c)
			counter++;
		while (*str && *str != c)
			str++;
	}
	return (counter);
}

static void	*ft_free(char **strs, size_t count)
{
	while (count)
		free(strs[count--]);
	free(strs);
	return (NULL);
}

static size_t	get_word_len(const char *str, char c)
{
	size_t	len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	idx;

	idx = 0;
	if (!s)
		return (NULL);
	arr = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			arr[idx] = ft_substr(s, 0, get_word_len(s, c));
			if (!arr[idx++])
				return (ft_free(arr, idx - 1));
		}
		while (*s && *s != c)
			s++;
	}
	arr[idx] = NULL;
	return (arr);
}

// int main()
// {
// 	char **strs;
// 	char *str;
// 	size_t idx = 0;

// 	str = "abcd..acd...aaa";
// 	strs = ft_split(str, '.');
// 	while (strs && strs[idx])
// 	{
// 		printf("%s, ", strs[idx]);
// 		idx++;
// 	}
// 	ft_free(strs, idx - 1);
// }