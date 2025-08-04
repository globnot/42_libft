/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 19:14:07 by aborda            #+#    #+#             */
/*   Updated: 2025/08/04 21:06:45 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_isalpha(void)
{
	t_test_int			tests[8];
	size_t				nb_tests;
	int					i;

	tests[0] = (t_test_int){.actual = '\0', .label = "\\0"};
	tests[1] = (t_test_int){.actual = 'A', .label = "A"};
	tests[2] = (t_test_int){.actual = 'a', .label = "a"};
	tests[3] = (t_test_int){.actual = '1', .label = "1"};
	tests[4] = (t_test_int){.actual = '!', .label = "!"};
	tests[5] = (t_test_int){.actual = '\n', .label = "\\n"};
	tests[6] = (t_test_int){.actual = -1, .label = "-1"};
	tests[7] = (t_test_int){.actual = -42, .label = "-42"};
	printf("\n========== Test de ft_isalpha==========\n");
	nb_tests = sizeof(tests) / sizeof(tests[0]);
	i = 0;
	while (nb_tests > 0)
	{
		assert_eq_int_logical(isalpha(tests[i].actual),
			ft_isalpha(tests[i].actual), tests[i].label);
		i++;
		nb_tests--;
	}
	printf("----------------------------------------\n");
}
