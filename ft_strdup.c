/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retahri <retahri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 04:55:18 by retahri           #+#    #+#             */
/*   Updated: 2024/10/31 05:10:24 by retahri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	i;

	ptr = malloc(ft_strlen(s1) + 1);
	i = 0;
	if (!ptr)
		return (NULL);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
// int main()
// {
//     char *original = "Hello World!";
//     char *dup;

//     // Test 1: Normal string
//     dup = ft_strdup(original);
//     printf("Original: %s\n", original);
//     printf("Duplicate: %s\n", dup);
//     free(dup);

//     // Test 2: Empty string
//     dup = ft_strdup("");
//     printf("Empty string test: '%s'\n", dup);
//     free(dup);

//     // Test 3: String with spaces
//     dup = ft_strdup("  spaces  ");
//     printf("Spaces test: '%s'\n", dup);
//     free(dup);

//     return (0);
// }