/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assert_eq_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 17:56:47 by aborda            #+#    #+#             */
/*   Updated: 2025/08/05 17:57:10 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	assert_eq_char(char *expected, char *actual, const char *label)
{
	if (expected == actual)
		printf("✅ [%s] OK (value: %s)\n", label, actual);
	else
		printf("❌ [%s] KO | expected: %s, actual: %s\n",
			label, expected, actual);
}
