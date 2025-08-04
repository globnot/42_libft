/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 19:14:07 by aborda            #+#    #+#             */
/*   Updated: 2025/08/04 21:00:17 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_isprint(void)
{
	t_test_int			tests[6];
	size_t				nb_tests;
	int					i;

	tests[0] = (t_test_int){.actual = '\0', .label = "\\0"};
	tests[1] = (t_test_int){.actual = 32, .label = "32"};
	tests[2] = (t_test_int){.actual = 0, .label = "0"};
	tests[3] = (t_test_int){.actual = 1, .label = "1"};
	tests[4] = (t_test_int){.actual = 126, .label = "126"};
	tests[5] = (t_test_int){.actual = 127, .label = "127"};
	printf("\n========== Test de ft_isprint==========\n");
	nb_tests = sizeof(tests) / sizeof(tests[0]);
	i = 0;
	while (nb_tests > 0)
	{
		assert_eq_int_logical(isprint(tests[i].actual),
			ft_isprint(tests[i].actual), tests[i].label);
		i++;
		nb_tests--;
	}
		printf("----------------------------------------\n");
}
