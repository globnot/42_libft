/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 15:07:56 by aborda            #+#    #+#             */
/*   Updated: 2025/10/21 17:25:02 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	init_tests(t_test_toupper *tests)
{
	tests[0] = (t_test_toupper)
	{'\0', "NULL character"};
	tests[1] = (t_test_toupper)
	{'A', "Upper character (A)"};
	tests[2] = (t_test_toupper)
	{'a', "Lower character (a)"};
	tests[3] = (t_test_toupper)
	{'1', "Positive digit (1)"};
	tests[4] = (t_test_toupper)
	{'!', "Special character (!)"};
	tests[5] = (t_test_toupper)
	{'\n', "Special character (\\n)"};
}

static void	print_results(const char *label, int expected, int actual)
{
	if (expected == actual)
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

void	test_ft_toupper(void)
{
	t_test_toupper		tests[6];
	size_t				i;
	size_t				nb_tests;
	int					std;
	int					ft;

	i = 0;
	nb_tests = sizeof(tests) / sizeof(tests[0]);
	init_tests(tests);
	printf("\n========== Test de ft_toupper==========\n");
	while (nb_tests > i)
	{
		std = toupper(tests[i].c);
		ft = ft_toupper(tests[i].c);
		print_results(tests[i].label, std, ft);
		i++;
	}
	printf("----------------------------------------\n");
}
