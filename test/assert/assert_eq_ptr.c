/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assert_eq_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 17:57:48 by aborda            #+#    #+#             */
/*   Updated: 2025/08/05 17:58:12 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	assert_eq_ptr(void *expected, void *actual,
				const char *label)
{
	if (expected == actual)
		printf("✅ [%s] OK (value: %p)\n", label, actual);
	else
		printf("❌ [%s] KO | expected: %p, actual: %p\n",
			label, expected, actual);
}
