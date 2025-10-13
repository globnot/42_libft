/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 19:14:07 by aborda            #+#    #+#             */
/*   Updated: 2025/10/13 12:30:24 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	init_tests(t_test_isalpha *tests)
{
	tests[0] = (t_test_isalpha)
	{'\0', "NULL character"};
	tests[1] = (t_test_isalpha)
	{'A', "Upper character (A)"};
	tests[2] = (t_test_isalpha)
	{'a', "Lower character (a)"};
	tests[3] = (t_test_isalpha)
	{'1', "Positive digit (1)"};
	tests[4] = (t_test_isalpha)
	{'!', "Special character (!)"};
	tests[5] = (t_test_isalpha)
	{'\n', "Special character (\\n)"};
	tests[6] = (t_test_isalpha)
	{-1, "Negative digit (-1)"};
	tests[7] = (t_test_isalpha)
	{-42, "Negative digit (-42)"};
}

static void	print_results(const char *label, int expected, int actual)
{
	if ((expected == 0 && actual == 0) || (expected != 0 && actual != 0))
	{
		printf("✅OK | %s \n", label);
		printf("expected: %d | actual: %d\n", expected, actual);
	}
	else
	{
		printf("❌KO | %s \n", label);
		printf("expected: %d | actual: %d\n", expected, actual);
	}
}

void	test_ft_isalpha(void)
{
	t_test_isalpha		tests[8];
	size_t				i;
	size_t				nb_tests;
	int					std;
	int					ft;

	i = 0;
	nb_tests = sizeof(tests) / sizeof(tests[0]);
	init_tests(tests);
	printf("\n========== Test de ft_isalpha==========\n");
	while (nb_tests > i)
	{
		std = isalpha(tests[i].c);
		ft = ft_isalpha(tests[i].c);
		print_results(tests[i].label, std, ft);
		i++;
	}
	printf("----------------------------------------\n");
}
