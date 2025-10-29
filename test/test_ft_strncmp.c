/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:56:02 by aborda            #+#    #+#             */
/*   Updated: 2025/10/29 14:45:05 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	init_tests(t_test_strncmp *tests)
{
	tests[0] = (t_test_strncmp)
	{"abc", "abc", 3, "Compare identical strings 'abc' (n = 3)"};
	tests[1] = (t_test_strncmp)
	{"abc", "abd", 3, "Compare strings 'abc' differing at last char (n = 3)"};
	tests[2] = (t_test_strncmp)
	{"abc", "abd", 2, "Compare only first 2 chars of 'abc (n = 2)"};
	tests[3] = (t_test_strncmp)
	{"abcd", "abc", 4, "Compare 'abcd' vs 'abc' (n = 4)"};
	tests[4] = (t_test_strncmp)
	{"abc", "xyz", 0, "Compare 'abc' vs 'xyz' (n = 0)"};
}

static void	print_results(const char *label, int expected, int actual)
{
	if ((expected == 0 && actual == 0) || (expected < 0 && actual < 0)
		|| (expected > 0 && actual > 0))
	{
		printf("✅ OK | %s\n", label);
		printf("expected: %d | actual: %d\n", expected, actual);
	}
	else
	{
		printf("❌ KO | %s\n", label);
		printf("expected: %d | actual: %d\n", expected, actual);
	}
}

void	test_ft_strncmp(void)
{
	t_test_strncmp	tests[5];
	size_t			i;
	size_t			nb_tests;
	int				std_result;
	int				ft_result;

	i = 0;
	nb_tests = sizeof(tests) / sizeof(tests[0]);
	init_tests(tests);
	printf("\n========== Test de ft_strncmp ==========\n");
	while (i < nb_tests)
	{
		std_result = strncmp(tests[i].s1, tests[i].s2, tests[i].n);
		ft_result = ft_strncmp(tests[i].s1, tests[i].s2, tests[i].n);
		print_results(tests[i].label, std_result, ft_result);
		i++;
	}
	printf("----------------------------------------\n");
}
