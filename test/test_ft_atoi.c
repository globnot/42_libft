/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 19:46:32 by aborda            #+#    #+#             */
/*   Updated: 2025/08/04 19:52:20 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_atoi(void)
{
	t_test	tests[10];
	size_t	nb_tests;
	int		i;

	tests[0] = (t_test){.actual = "", .label = "\"\""};
	tests[1] = (t_test){.actual = "abc", .label = "abc"};
	tests[2] = (t_test){.actual = "2147483647", .label = "2147483647"};
	tests[3] = (t_test){.actual = "-2147483648", .label = "-2147483648"};
	tests[4] = (t_test){.actual = "42", .label = "42"};
	tests[5] = (t_test){.actual = "-42", .label = "-42"};
	tests[6] = (t_test){.actual = "   42", .label = "   42"};
	tests[7] = (t_test){.actual = "   --42", .label = "   --42"};
	tests[8] = (t_test){.actual = "-0042abc", .label = "-0042abc"};
	tests[9] = (t_test){.actual = "0042abc", .label = "0042abc"};
	printf("\n========== Test de ft_atoi ==========\n");
	nb_tests = sizeof(tests) / sizeof(tests[0]);
	i = 0;
	while (nb_tests > 0)
	{
		assert_eq_int(atoi(tests[i].actual), ft_atoi(tests[i].actual),
			tests[i].label);
		i++;
		nb_tests--;
	}
	printf("----------------------------------------\n");
}
