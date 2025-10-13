/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 10:01:38 by aborda            #+#    #+#             */
/*   Updated: 2025/10/13 23:57:38 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

// Ces tests ne couvrent pas l'overlap

static void	init_tests(t_test_memmove *tests)
{
	tests[0] = (t_test_memmove)
	{"Hello", "World", 3, "Copy first 3 bytes of 'World' into 'Hello'"};
	tests[1] = (t_test_memmove)
	{"Hello", "World", 0, "Copy 0 bytes (no change)"};
	tests[2] = (t_test_memmove)
	{"abcdef", "123456", 6, "Copy 6 bytes of '123456' into 'abcdef'"};
	tests[3] = (t_test_memmove)
	{"abcdef", "XYZ", 2, "Copy first 2 bytes of 'XYZ' into 'abcdef'"};
}

static void	print_results(const char *label, char *expected, char *actual,
				size_t n)
{
	if (memcmp(expected, actual, n) == 0)
	{
		printf("✅OK | %s\n", label);
		printf("expected: \"%s\" | actual: \"%s\"\n", expected, actual);
	}
	else
	{
		printf("❌KO | %s\n", label);
		printf("expected: \"%s\" | actual: \"%s\"\n", expected, actual);
	}
}

void	test_ft_memmove(void)
{
	t_test_memmove	tests[4];
	size_t			i;
	size_t			nb_tests;
	char			std_buf[20];
	char			ft_buf[20];

	i = 0;
	nb_tests = sizeof(tests) / sizeof(tests[0]);
	init_tests(tests);
	printf("\n========== Test de ft_memmove ==========\n");
	while (i < nb_tests)
	{
		memset(std_buf, 0, sizeof(std_buf));
		memset(ft_buf, 0, sizeof(ft_buf));
		strcpy(std_buf, tests[i].dest);
		strcpy(ft_buf, tests[i].dest);
		memmove(std_buf, tests[i].s, tests[i].n);
		ft_memmove(ft_buf, tests[i].s, tests[i].n);
		print_results(tests[i].label, std_buf, ft_buf, tests[i].n);
		i++;
	}
	printf("----------------------------------------\n");
}
