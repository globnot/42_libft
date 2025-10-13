/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 19:14:07 by aborda            #+#    #+#             */
/*   Updated: 2025/10/13 12:31:28 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	init_tests(t_test_isdigit *tests)
{
	tests[0] = (t_test_isdigit)
	{'\0', "NULL character"};
	tests[1] = (t_test_isdigit)
	{'1', "Positive digit (1)"};
	tests[2] = (t_test_isdigit)
	{'a', "Lower character (a)"};
	tests[3] = (t_test_isdigit)
	{'!', "Special character (!)"};
	tests[4] = (t_test_isdigit)
	{'\n', "Special character (\\n)"};
	tests[5] = (t_test_isdigit)
	{-1, "Negative digit (-1)"};
	tests[6] = (t_test_isdigit)
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

void	test_ft_isdigit(void)
{
	t_test_isdigit		tests[7];
	size_t				i;
	size_t				nb_tests;
	int					std;
	int					ft;

	i = 0;
	nb_tests = sizeof(tests) / sizeof(tests[0]);
	init_tests(tests);
	printf("\n========== Test de ft_isdigit==========\n");
	while (nb_tests > i)
	{
		std = isdigit(tests[i].c);
		ft = ft_isdigit(tests[i].c);
		print_results(tests[i].label, std, ft);
		i++;
	}
	printf("----------------------------------------\n");
}
