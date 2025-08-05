/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assert_eq_int_logical.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 17:54:26 by aborda            #+#    #+#             */
/*   Updated: 2025/08/05 17:55:13 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	assert_eq_int_logical(int expected, int actual, const char *label)
{
	if ((expected != 0 && actual != 0) || (expected == 0 && actual == 0))
		printf("✅ [%s] OK (value: %d)\n", label, actual);
	else
		printf("❌ [%s] KO | expected: %d, actual: %d\n",
			label, expected, actual);
}
