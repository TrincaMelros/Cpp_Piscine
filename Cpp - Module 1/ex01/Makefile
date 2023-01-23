MAKEFLAGS	+=	--quiet

			# Library Name #
NAME	=
ZOMBIE	=	zombie

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

all: $(ZOMBIE)

$(NAME): all

$(ZOMBIE): $(SRCS)
	@ $(CC) $(CFLAG) $(SRCS) -o $(ZOMBIE)
	@printf "[$(GREEN)SUCCESS$(RESET)] ZOMBIE compiled.\n"

clean:
	@ $(RM) $(ZOMBIE)
	@printf "[$(YELLOW)SUCCESS$(RESET)] Executable removed.\n"

fclean:
	@ $(RM) $(ZOMBIE)
	@printf "[$(YELLOW)SUCCESS$(RESET)] Executable removed.\n"

re: fclean all
