/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assert_eq_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 17:55:26 by aborda            #+#    #+#             */
/*   Updated: 2025/08/05 17:55:58 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	assert_eq_int(int expected, int actual, const char *label)
{
	if (expected == actual)
		printf("✅ [%s] OK (value: %d)\n", label, actual);
	else
		printf("❌ [%s] KO | expected: %d, actual: %d\n",
			label, expected, actual);
}
