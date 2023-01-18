MAKEFLAGS	+=	--quiet

			# Library Name #
NAME		=
PHONEBOOK	=	phonebook

			# Mandatory Variables #
SRCS			=	./*.cpp

			# Compiling Variables #
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f

			# Color Variables #
GREEN		= \e[0;32m
RED			= \e[0;31m
YELLOW		= \e[0;33m
RESET		= \e[0m

all: $(PHONEBOOK)

$(NAME): all

$(PHONEBOOK): $(SRCS)
	@ $(CC) $(CFLAG) $(SRCS) -o $(PHONEBOOK)
	@printf "[$(GREEN)SUCCESS$(RESET)] SOFTWARE compiled.\n"

clean:
	@ $(RM) $(PHONEBOOK)
	@printf "[$(YELLOW)SUCCESS$(RESET)] Executable removed.\n"

fclean:
	@ $(RM) $(PHONEBOOK)
	@printf "[$(YELLOW)SUCCESS$(RESET)] Executable removed.\n"

re: fclean all
