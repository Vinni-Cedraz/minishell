/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astaroth <astaroth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:03:44 by johmatos          #+#    #+#             */
/*   Updated: 2023/05/16 18:16:52 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	main(int argc, char *argv[], char *envp[])
{
	t_databus	data;

	init_signal();
	main_setup_hook(&data);
	init_environ(envp, data.env);
	//ft_print_env(data.env);
	//free_env(data.env);
	//free(data.env);
	//free(data.cmds);
	wait_input(data);
	return (0);
	argc = (int)argc;
	argv = (char **)argv;
}
