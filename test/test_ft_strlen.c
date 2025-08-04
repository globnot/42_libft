/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 19:14:07 by aborda            #+#    #+#             */
/*   Updated: 2025/08/04 21:08:11 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_strlen(void)
{
	t_test_char	tests[5];
	size_t		nb_tests;
	int			i;

	tests[0] = (t_test_char){.actual = "", .label = "\"\""};
	tests[1] = (t_test_char){.actual = "abc", .label = "abc"};
	tests[2] = (t_test_char){.actual = "a b c", .label = "a b c"};
	tests[3] = (t_test_char){.actual = "abc\n", .label = "abc\\n"};
	tests[4] = (t_test_char){.actual = "123456!", .label = "123456!"};
	printf("\n========== Test de ft_strlen ==========\n");
	nb_tests = sizeof(tests) / sizeof(tests[0]);
	i = 0;
	while (nb_tests > 0)
	{
		assert_eq_size_t(strlen(tests[i].actual), ft_strlen(tests[i].actual),
			tests[i].label);
		i++;
		nb_tests--;
	}
	printf("----------------------------------------\n");
}
