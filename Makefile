# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpoulet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 09:22:13 by cpoulet           #+#    #+#              #
#    Updated: 2017/02/24 16:41:43 by cpoulet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COLLEEN := Colleen
GRACE   := Grace
SULLY   := Sully

C_SRC   := Colleen.c
G_SRC   := Grace.c
S_SRC   := Sully.c

B_PATH  := bin/
O_PATH  := objs/
C_OBJ   := $(addprefix $(O_PATH), $(C_SRC:.c=.o))
G_OBJ   := $(addprefix $(O_PATH), $(G_SRC:.c=.o))
S_OBJ   := $(addprefix $(O_PATH), $(S_SRC:.c=.o))

FLAGS = -Wall -Wextra -Werror

vpath %.c src/

.PHONY: all libft clean fclean re

all : $(COLLEEN) $(GRACE) $(SULLY)

$(O_PATH)%.o: %.c
	@mkdir -p $(O_PATH)
	@gcc -c $< $(FLAGS) -o $@
	@echo "Compiling [\x1B[1;32m$<\x1B[0m]\r"

$(COLLEEN) : $(C_OBJ)
	@mkdir -p $(B_PATH)
	@gcc $< $(FLAGS) -o $(B_PATH)/$@

$(GRACE) : $(G_OBJ)
	@if ! [ -d $(B_PATH) ]; then mkdir $(B_PATH); fi
	@gcc $< $(FLAGS) -o $(B_PATH)/$@

$(SULLY) : $(S_OBJ)
	@if ! [ -d $(B_PATH) ]; then mkdir $(B_PATH); fi
	@gcc $< $(FLAGS) -o $(B_PATH)/$@

clean :
	@rm -rf $(O_PATH)
	@echo "\x1B[1;31mDeleting object files\x1B[0m"

fclean : clean
	@rm -Rf $(B_PATH)
	@echo "\x1B[1;31mDeleting binary files\x1B[0m"

re : fclean all
