/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 09:42:50 by aborda            #+#    #+#             */
/*   Updated: 2025/11/11 10:19:37 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	char	*substr;
	size_t	i;

	size = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
		size = 0;
	if (size > len)
		size = len;
	substr = malloc(sizeof(char) * (size + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < size)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
