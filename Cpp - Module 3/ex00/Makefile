MAKEFLAGS	+=	--quiet

			# Library Name #
NAME	=
CLAPPER	=	clapper

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

all: $(CLAPPER)

$(NAME): all

$(CLAPPER): $(SRCS)
	@ $(CC) $(CFLAG) $(SRCS) -o $(CLAPPER)
	@printf "[$(GREEN)SUCCESS$(RESET)] Clapper compiled.\n"

clean:
	@ $(RM) $(CLAPPER)
	@printf "[$(YELLOW)SUCCESS$(RESET)] Executable removed.\n"

fclean:
	@ $(RM) $(CLAPPER)
	@printf "[$(YELLOW)SUCCESS$(RESET)] Executable removed.\n"

re: fclean all
