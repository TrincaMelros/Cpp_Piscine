MAKEFLAGS	+=	--quiet

			# Library Name #
NAME	=
GUNS	=	guns

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

all: $(GUNS)

$(NAME): all

$(GUNS): $(SRCS)
	@ $(CC) $(CFLAG) $(SRCS) -o $(GUNS)
	@printf "[$(GREEN)SUCCESS$(RESET)] GUNS compiled.\n"

clean:
	@ $(RM) $(GUNS)
	@printf "[$(YELLOW)SUCCESS$(RESET)] Executable removed.\n"

fclean:
	@ $(RM) $(GUNS)
	@printf "[$(YELLOW)SUCCESS$(RESET)] Executable removed.\n"

re: fclean all
