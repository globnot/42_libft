/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 14:23:01 by aborda            #+#    #+#             */
/*   Updated: 2025/10/12 16:27:09 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	init_tests(t_test_strchr *tests)
{
	tests[0] = (t_test_strchr)
	{"hello", 'h', "First character (h) -> hello" };
	tests[1] = (t_test_strchr)
	{"hello", 'e', "Second character (e) -> hello" };
	tests[2] = (t_test_strchr)
	{"hello", 'l', "Repeated character (l) -> hello" };
	tests[3] = (t_test_strchr)
	{"hello", 'o', "Last character (o) -> hello" };
	tests[4] = (t_test_strchr)
	{"hello", 'z', "Character not found (z) -> hello" };
	tests[5] = (t_test_strchr)
	{"hello", '\0', "NULL character -> hello" };
	tests[6] = (t_test_strchr)
	{"", 'a', "Empty string" };
	tests[7] = (t_test_strchr)
	{"", '\0', "Empty string with NULL" };
}

static void	print_results(const char *label, char *expected, char *actual)
{
	if (expected == actual)
		printf("✅OK | %s \n", label);
	else
		printf("❌KO | %s \n", label);
	printf("expected: %p", (void *)expected);
	if (expected != NULL)
		printf(" | value: \"%s\"\n", expected);
	else
		printf(" | value: (nil)\n");
	printf("actual  : %p", (void *)actual);
	if (actual != NULL)
		printf(" | value: \"%s\"\n", actual);
	else
		printf(" | value: (nil)\n");
}

void	test_ft_strchr(void)
{
	t_test_strchr	tests[8];
	size_t			i;
	size_t			nb_tests;
	char			*std;
	char			*ft;

	i = 0;
	nb_tests = sizeof(tests) / sizeof(tests[0]);
	init_tests(tests);
	printf("\n========== Test de ft_strchr ==========\n");
	while (nb_tests > i)
	{
		std = strchr(tests[i].s, tests[i].c);
		ft = ft_strchr(tests[i].s, tests[i].c);
		print_results(tests[i].label, std, ft);
		i++;
	}
	printf("----------------------------------------\n");
}
