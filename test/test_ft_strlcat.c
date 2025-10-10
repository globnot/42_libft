/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 21:01:24 by aborda            #+#    #+#             */
/*   Updated: 2025/10/10 19:16:08 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	init_strlcat_tests(t_test_strlcat *tests)
{
	tests[0] = (t_test_strlcat){.dst = "XXXXXX", .src = "", .dsize = 6,
		.label_return = "(Return)",
		.label_buffer = "(Buffer) dst = XXXXXX, src = , dsize = 6"};
	tests[1] = (t_test_strlcat){.dst = "XXXXXX", .src = "ABC", .dsize = 6,
		.label_return = "(Return)",
		.label_buffer = "(Buffer) dst = XXXXXX, src = ABC, dsize = 6"};
	tests[2] = (t_test_strlcat){.dst = "XXXXXX", .src = "ABCDEFG", .dsize = 6,
		.label_return = "(Return)",
		.label_buffer = "(Buffer) dst = XXXXXX, src = ABCDEFG, dsize = 6"};
	tests[3] = (t_test_strlcat){.dst = "XXXXXX", .src = "ABC", .dsize = 0,
		.label_return = "(Return)",
		.label_buffer = "(Buffer) dst = XXXXXX, src = ABC, dsize = 0"};
	tests[4] = (t_test_strlcat){.dst = "XXXXXX", .src = "12345", .dsize = 5,
		.label_return = "(Return)",
		.label_buffer = "(Buffer) dst = XXXXXX, src = 12345, dsize = 5"};
}

void	test_ft_strlcat(void)
{
	t_test_strlcat	tests[5];
	char			std_buf[20];
	char			ft_buf[20];
	size_t			nb_tests;
	size_t			i;

	init_strlcat_tests(tests);
	printf("\n========== Test de ft_strlcat ==========\n");
	i = 0;
	nb_tests = sizeof(tests) / sizeof(tests[0]);
	while (i < nb_tests)
	{
		strcpy(std_buf, tests[i].dst);
		strcpy(ft_buf, tests[i].dst);
		assert_eq_int(strlcat(std_buf, tests[i].src, tests[i].dsize),
			ft_strlcat(ft_buf, tests[i].src, tests[i].dsize),
			tests[i].label_return);
		assert_eq_str(std_buf, ft_buf, tests[i].label_buffer);
		i++;
	}
	printf("----------------------------------------\n");
}
