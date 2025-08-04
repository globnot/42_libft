/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_assert.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:05:48 by aborda            #+#    #+#             */
/*   Updated: 2025/08/04 18:31:58 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	assert_eq_int_logical(int expected, int actual, const char *label)
{
	if ((expected != 0 && actual != 0) || (expected == 0 && actual == 0))
		printf("✅ [%s] OK (value: %d)\n", label, actual);
	else
		printf("❌ [%s] KO | expected: %d, actual: %d\n",
			label, expected, actual);
}

void	assert_eq_int(int expected, int actual, const char *label)
{
	if (expected == actual)
		printf("✅ [%s] OK (value: %d)\n", label, actual);
	else
		printf("❌ [%s] KO | expected: %d, actual: %d\n",
			label, expected, actual);
}

void	assert_eq_size_t(size_t expected, size_t actual, const char *label)
{
	if (expected == actual)
		printf("✅ [%s] OK (value: %zu)\n", label, actual);
	else
		printf("❌ [%s] KO | expected: %zu, actual: %zu\n",
			label, expected, actual);
}

void	assert_eq_char(char *expected, char *actual, const char *label)
{
	if (expected == actual)
		printf("✅ [%s] OK (value: %s)\n", label, actual);
	else
		printf("❌ [%s] KO | expected: %s, actual: %s\n",
			label, expected, actual);
}

void	assert_eq_str(const char *expected, const char *actual,
				const char *label)
{
	if (strcmp(expected, actual) == 0)
		printf("✅ [%s] OK (value: \"%s\")\n", label, actual);
	else
		printf("❌ [%s] KO\n\texpected: \"%s\"\n\tactual  : \"%s\"\n",
			label, expected, actual);
}
