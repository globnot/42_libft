/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 19:14:07 by aborda            #+#    #+#             */
/*   Updated: 2025/08/04 20:33:11 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_isdigit(void)
{
	t_test_int			tests[7];
	size_t				nb_tests;
	int					i;

	tests[0] = (t_test_int){.actual = ' ', .label = "\"\""};
	tests[1] = (t_test_int){.actual = '1', .label = "1"};
	tests[2] = (t_test_int){.actual = 'a', .label = "a"};
	tests[3] = (t_test_int){.actual = '!', .label = "!"};
	tests[4] = (t_test_int){.actual = '\n', .label = "\\n"};
	tests[5] = (t_test_int){.actual = -1, .label = "-1"};
	tests[6] = (t_test_int){.actual = -42, .label = "-42"};
	printf("\n========== Test de ft_isdigit==========\n");
	nb_tests = sizeof(tests) / sizeof(tests[0]);
	i = 0;
	while (nb_tests > 0)
	{
		assert_eq_int_logical(isdigit(tests[i].actual),
			ft_isdigit(tests[i].actual), tests[i].label);
		i++;
		nb_tests--;
	}
		printf("----------------------------------------\n");
}
