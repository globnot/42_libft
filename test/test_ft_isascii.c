/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 19:14:07 by aborda            #+#    #+#             */
/*   Updated: 2025/08/05 09:31:58 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_isascii(void)
{
	t_test_int			tests[8];
	size_t				nb_tests;
	int					i;

	tests[0] = (t_test_int){.actual = 'A', .label = "A"};
	tests[1] = (t_test_int){.actual = '0', .label = "0"};
	tests[2] = (t_test_int){.actual = 127, .label = "127"};
	tests[3] = (t_test_int){.actual = 128, .label = "128"};
	tests[4] = (t_test_int){.actual = -1, .label = "-1"};
	tests[5] = (t_test_int){.actual = 0, .label = "0"};
	tests[6] = (t_test_int){.actual = '~', .label = "~"};
	tests[7] = (t_test_int){.actual = 200, .label = "200"};
	printf("\n========== Test de ft_isascii==========\n");
	nb_tests = sizeof(tests) / sizeof(tests[0]);
	i = 0;
	while (nb_tests > 0)
	{
		assert_eq_int_logical(isascii(tests[i].actual),
			ft_isascii(tests[i].actual), tests[i].label);
		i++;
		nb_tests--;
	}
	printf("----------------------------------------\n");
}
