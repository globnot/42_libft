/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 10:26:37 by aborda            #+#    #+#             */
/*   Updated: 2025/08/05 12:35:51 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

/*
	* Dans la premiere boucle on teste uniqument 
	le return entre memset et ft_memset
	* Dans le seconde boucle on teste le contenu des buffers
*/
void	test_ft_memset(void)
{
	t_test_memset	tests[6];
	size_t			nb_tests;
	int				i;
	char			std_buf[20];
	char			ft_buf[20];

	tests[0] = (t_test_memset){.s = "XXXXXX", .c = 'T', .n = 0,
		.label_return = "Return", .label_buffer = "Buffer : c = 'T' & n = 0"};
	tests[1] = (t_test_memset){.s = "XXXXXX", .c = 'T', .n = 5,
		.label_return = "Return", .label_buffer = "Buffer c = 'T' & n = 5"};
	tests[2] = (t_test_memset){.s = "XXXXXX", .c = 'T', .n = 20,
		.label_return = "Return", .label_buffer = "Buffer c = 'T' & n = 20"};
	tests[3] = (t_test_memset){.s = "XXXXXX", .c = 127, .n = 6,
		.label_return = "Return", .label_buffer = "Buffer c = 127 & n = 6"};
	tests[4] = (t_test_memset){.s = "XXXXXX", .c = '\n', .n = 5,
		.label_return = "Return", .label_buffer = "Buffer c = '\\n' & n = 5"};
	tests[5] = (t_test_memset){.s = "XXXXXX", .c = 'T', .n = 10,
		.label_return = "Return", .label_buffer = "Buffer c = 'T' & n = 10"};
	printf("\n========== Test de ft_memset ==========\n");
	nb_tests = sizeof(tests) / sizeof(tests[0]);
	i = 0;
	while (nb_tests > 0)
	{
		assert_eq_ptr((memset(tests[i].s, tests[i].c, tests[i].n)),
			(ft_memset(tests[i].s, tests[i].c, tests[i].n)),
				tests[i].label_return);
		i++;
		nb_tests--;
	}
	nb_tests = sizeof(tests) / sizeof(tests[0]);
	i = 0;
	while (nb_tests > 0)
	{
		strcpy(std_buf, tests[i].s);
		strcpy(ft_buf, tests[i].s);
		memset(std_buf, tests[i].c, tests[i].n);
		ft_memset(ft_buf, tests[i].c, tests[i].n);
		assert_eq_str(std_buf, ft_buf, tests[i].label_buffer);
		i++;
		nb_tests--;
	}
	printf("----------------------------------------\n");
}
