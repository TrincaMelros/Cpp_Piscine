MAKEFLAGS	+=	--quiet

			# Library Name #
NAME	=
POINTER	=	pointer

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

all: $(POINTER)

$(NAME): all

$(POINTER): $(SRCS)
	@ $(CC) $(CFLAG) $(SRCS) -o $(POINTER)
	@printf "[$(GREEN)SUCCESS$(RESET)] POINTER compiled.\n"

clean:
	@ $(RM) $(POINTER)
	@printf "[$(YELLOW)SUCCESS$(RESET)] Executable removed.\n"

fclean:
	@ $(RM) $(POINTER)
	@printf "[$(YELLOW)SUCCESS$(RESET)] Executable removed.\n"

re: fclean all
