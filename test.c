/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 17:01:24 by aborda            #+#    #+#             */
/*   Updated: 2025/08/03 17:11:03 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	assert_eq_size_t(size_t expected, size_t actual, const char *input)
{
	if (expected == actual)
		printf("✅ [%s] OK (value: %zu)\n", input, actual);
	else
		printf("❌ [%s] KO | expected: %zu, actual: %zu\n", input, expected, actual);
}

void	test_ft_strlen(void)
{
	printf("\n========== Test de ft_strlen ==========\n");
	assert_eq_size_t(strlen(""), ft_strlen(""), "\"\"");
	assert_eq_size_t(strlen("abc"), ft_strlen("abc"), "\"abc\"");
	assert_eq_size_t(strlen("a b c"), ft_strlen("a b c"), "\"a b c\"");
	assert_eq_size_t(strlen("abc\n\tdef"), ft_strlen("abc\n\tdef"), "\"abs\n\tdef\"");
	assert_eq_size_t(strlen("123456!"), ft_strlen("123456!"), "\"123456!\"");
	printf("----------------------------------------\n");
}

int	main(void)
{
	test_ft_strlen();
}
