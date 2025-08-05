/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assert_eq_size_t.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 17:56:09 by aborda            #+#    #+#             */
/*   Updated: 2025/08/05 17:56:37 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	assert_eq_size_t(size_t expected, size_t actual, const char *label)
{
	if (expected == actual)
		printf("✅ [%s] OK (value: %zu)\n", label, actual);
	else
		printf("❌ [%s] KO | expected: %zu, actual: %zu\n",
			label, expected, actual);
}
