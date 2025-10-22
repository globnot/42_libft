/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 19:46:32 by aborda            #+#    #+#             */
/*   Updated: 2025/10/22 11:10:18 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	init_tests(t_test_atoi *tests)
{
	tests[0] = (t_test_atoi)
	{"", "Empty string"};
	tests[1] = (t_test_atoi)
	{"abc", "Alphabetical string (abc)"};
	tests[2] = (t_test_atoi)
	{"2147483647", "MAX number (2147483647)"};
	tests[3] = (t_test_atoi)
	{"-2147483648", "MIN number (-2147483648)"};
	tests[4] = (t_test_atoi)
	{"42", "Positive number (42)"};
	tests[5] = (t_test_atoi)
	{"-42", "Negative number (-42)"};
	tests[6] = (t_test_atoi)
	{"  42", "Special combination (  42)"};
	tests[7] = (t_test_atoi)
	{"  --42", "Special combination (  --42)"};
	tests[8] = (t_test_atoi)
	{"-0042abc", "Special combination (-0042abc)"};
	tests[9] = (t_test_atoi)
	{"0042abc", "Special combination 0042abc)"};
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

void	test_ft_atoi(void)
{
	t_test_atoi			tests[10];
	size_t				i;
	size_t				nb_tests;
	int					std;
	int					ft;

	i = 0;
	nb_tests = sizeof(tests) / sizeof(tests[0]);
	init_tests(tests);
	printf("\n========== Test de ft_atoi==========\n");
	while (nb_tests > i)
	{
		std = atoi(tests[i].s);
		ft = ft_atoi(tests[i].s);
		print_results(tests[i].label, std, ft);
		i++;
	}
	printf("----------------------------------------\n");
}
