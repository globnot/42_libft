/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assert_eq_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 17:57:18 by aborda            #+#    #+#             */
/*   Updated: 2025/08/05 17:57:40 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	assert_eq_str(const char *expected, const char *actual,
				const char *label)
{
	if (strcmp(expected, actual) == 0)
		printf("✅ [%s] OK (value: \"%s\")\n", label, actual);
	else
		printf("❌ [%s] KO\n\texpected: \"%s\"\n\tactual  : \"%s\"\n",
			label, expected, actual);
}
