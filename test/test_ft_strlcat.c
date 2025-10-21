/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 21:01:24 by aborda            #+#    #+#             */
/*   Updated: 2025/10/21 17:08:55 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	init_tests(t_test_strlcat *tests)
{
	tests[0] = (t_test_strlcat)
	{"Hello", "World", 11, "Concat full 'World' to 'Hello' (buffer 11)"};
	tests[1] = (t_test_strlcat)
	{"Hello", "World", 8, "Concat 2 chars 'World' to 'Hello' (buffer 8)"};
	tests[2] = (t_test_strlcat)
	{"", "42", 3, "Concat 42 to empty dst (buffer 3)"};
	tests[3] = (t_test_strlcat)
	{"Hello", "", 5, "Copy empty src into 'Hello' (buffer 5)"};
}

static void	print_results(const char *label, char *expected, char *actual)
{
	if (strcmp(expected, actual) == 0)
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

void	test_ft_strlcat(void)
{
	t_test_strlcat	tests[4];
	size_t			i;
	size_t			nb_tests;
	char			std_buf[20];
	char			ft_buf[20];

	i = 0;
	nb_tests = sizeof(tests) / sizeof(tests[0]);
	init_tests(tests);
	printf("\n========== Test de ft_strlcat ==========\n");
	while (i < nb_tests)
	{
		memset(std_buf, 0, sizeof(std_buf));
		memset(ft_buf, 0, sizeof(ft_buf));
		strcpy(std_buf, tests[i].dst);
		strcpy(ft_buf, tests[i].dst);
		strlcat(std_buf, tests[i].src, tests[i].dsize);
		strlcat(ft_buf, tests[i].src, tests[i].dsize);
		print_results(tests[i].label, std_buf, ft_buf);
		i++;
	}
	printf("----------------------------------------\n");
}
