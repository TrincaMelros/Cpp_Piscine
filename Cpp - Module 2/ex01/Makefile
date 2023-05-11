MAKEFLAGS	+=	--quiet

			# Library Name #
NAME	=
FIXED	=	fixed

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

all: $(FIXED)

$(NAME): all

$(FIXED): $(SRCS)
	@ $(CC) $(CFLAG) $(SRCS) -o $(FIXED)
	@printf "[$(GREEN)SUCCESS$(RESET)] Fixed compiled.\n"

clean:
	@ $(RM) $(FIXED)
	@printf "[$(YELLOW)SUCCESS$(RESET)] Executable removed.\n"

fclean:
	@ $(RM) $(FIXED)
	@printf "[$(YELLOW)SUCCESS$(RESET)] Executable removed.\n"

re: fclean all
