# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: angagnie <angagnie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/25 17:16:40 by angagnie          #+#    #+#              #
#    Updated: 2015/12/08 13:19:59 by angagnie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cd ../
ls -l ft_*.c | wc -l
make
cd testlibft/
rm -f ./libft_tester
make
./libft_tester
