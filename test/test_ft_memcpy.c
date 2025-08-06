/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 10:01:38 by aborda            #+#    #+#             */
/*   Updated: 2025/08/06 10:37:18 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	init_memcpy_tests(t_test_memcpy *tests)
{
	tests[0] = (t_test_memcpy){.dest = "XXXXXX", .src = "ABC", .n = 0,
		.label_return = "Return",
		.label_buffer = "Buffer dest = XXXXXX, src = ABC, n = 0"};
	tests[1] = (t_test_memcpy){.dest = "XXXXXX", .src = "ABC", .n = 3,
		.label_return = "Return",
		.label_buffer = "Buffer dest = XXXXXX, src = ABC, n = 3"};
	tests[2] = (t_test_memcpy){.dest = "XXXXXX", .src = "ABC", .n = 6,
		.label_return = "Return",
		.label_buffer = "Buffer dest = XXXXXX, src = ABC, n = 6"};
	tests[3] = (t_test_memcpy){.dest = "123456", .src = "abcdef", .n = 6,
		.label_return = "Return",
		.label_buffer = "Buffer dest = 123456, src = abcdef, n = 6"};
	tests[4] = (t_test_memcpy){.dest = "123456789", .src = "XYZ", .n = 2,
		.label_return = "Return",
		.label_buffer = "Buffer dest = 123456789, src = XYZ, n = 2"};
	tests[5] = (t_test_memcpy){.dest = "XXXXXX", .src = "", .n = 0,
		.label_return = "Return",
		.label_buffer = "Buffer dest = XXXXXX, src = "", n = 0"};
	tests[6] = (t_test_memcpy){.dest = "AAAAAA", .src = "BBBBBB", .n = 6,
		.label_return = "Return",
		.label_buffer = "Buffer dest = AAAAAA, src = BBBBBB, n = 6"};
	tests[7] = (t_test_memcpy){.dest = "ABCDEF", .src = "DEF", .n = 2,
		.label_return = "Return",
		.label_buffer = "Buffer dest = ABCDEF, src = DEF, n = 2"};
}

void	test_ft_memcpy(void)
{
	t_test_memcpy	tests[8];
	char			std_buf[20];
	char			ft_buf[20];
	size_t			nb_tests;
	size_t			i;

	init_memcpy_tests(tests);
	printf("\n========== Test de ft_memcpy ==========\n");
	i = 0;
	nb_tests = sizeof(tests) / sizeof(tests[0]);
	while (i < nb_tests)
	{
		assert_eq_ptr(memcpy(tests[i].dest, tests[i].src, tests[i].n),
			ft_memcpy(tests[i].dest, tests[i].src, tests[i].n),
			tests[i].label_return);
		strcpy(std_buf, tests[i].dest);
		strcpy(ft_buf, tests[i].dest);
		memcpy(std_buf, tests[i].src, tests[i].n);
		ft_memcpy(ft_buf, tests[i].src, tests[i].n);
		assert_eq_str(std_buf, ft_buf, tests[i].label_buffer);
		i++;
	}
	printf("----------------------------------------\n");
}
