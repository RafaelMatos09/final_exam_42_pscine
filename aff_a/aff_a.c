/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafmorei <djmaelreborn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 21:09:31 by rafmorei          #+#    #+#             */
/*   Updated: 2023/08/18 21:14:36 by rafmorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc != 2)
    {
        write(1, "a\n", 2);
        return (0);
    }
    while (argv[1][i])
    {
        if (argv[1][i] == 'a')
        {
            write(1, "a\n", 2);
            return (0);
        }
        i++;
    }
    write(1, "\n", 1);
    return (0);
}