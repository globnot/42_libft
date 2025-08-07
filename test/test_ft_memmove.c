/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 10:01:38 by aborda            #+#    #+#             */
/*   Updated: 2025/08/07 14:24:07 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	init_memmove_tests(t_test_memmove *tests)
{
	tests[0] = (t_test_memmove){.dest = "12345", .n = 5,
		.label
		= "(Buffer) overlap ptr_dest > ptr_src = 12345, n = 5"};
	tests[1] = (t_test_memmove){.dest = "12345", .n = 5,
		.label
		= "(Buffer) overlap ptr_dest < ptr_src = 12345, n = 5"};
}

void	test_ft_memmove(void)
{
	t_test_memmove	tests[2];
	char			std_buf[20];
	char			ft_buf[20];

	init_memmove_tests(tests);
	printf("\n========== Test de ft_memmove ==========\n");
	strcpy(std_buf, tests[0].dest);
	strcpy(ft_buf, tests[0].dest);
	memmove(std_buf + 2, std_buf, tests[0].n);
	ft_memmove(ft_buf + 2, ft_buf, tests[0].n);
	assert_eq_str(std_buf, ft_buf, tests[0].label);
	strcpy(std_buf, tests[1].dest);
	strcpy(ft_buf, tests[1].dest);
	memmove(std_buf, std_buf + 2, tests[1].n);
	ft_memmove(ft_buf, ft_buf + 2, tests[1].n);
	assert_eq_str(std_buf, ft_buf, tests[1].label);
	printf("----------------------------------------\n");
}
