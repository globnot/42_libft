/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 21:00:00 by aborda            #+#    #+#             */
/*   Updated: 2025/08/06 09:15:30 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	init_bzero_tests(t_test_bzero *tests)
{
	tests[0] = (t_test_bzero){.s = "abcdef", .n = 3,
		.label = "Buffer : s = abcdef, n = 3"};
	tests[1] = (t_test_bzero){.s = "", .n = 0,
		.label = "Buffer : s = "", n = 0"};
	tests[2] = (t_test_bzero){.s = "abc", .n = 0,
		.label = "Buffer : s = abc, n = 0"};
	tests[3] = (t_test_bzero){.s = "abc", .n = 3,
		.label = "Buffer : s = abc, n = 10"};
}

void	test_ft_bzero(void)
{
	t_test_bzero	tests[4];
	char			std_buf[20];
	char			ft_buf[20];
	size_t			nb_tests;
	size_t			i;

	init_bzero_tests(tests);
	printf("\n========== Test de ft_bzero ==========\n");
	i = 0;
	nb_tests = sizeof(tests) / sizeof(tests[0]);
	while (i < nb_tests)
	{
		strcpy(std_buf, tests[i].s);
		strcpy(ft_buf, tests[i].s);
		bzero(std_buf, tests[i].n);
		ft_bzero(ft_buf, tests[i].n);
		assert_eq_str(std_buf, ft_buf, tests[i].label);
		i++;
	}
	printf("----------------------------------------\n");
}
