MAKEFLAGS	+=	--quiet

			# Library Name #
NAME		=
REPLACER	=	replacer

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

all: $(REPLACER)

$(NAME): all

$(REPLACER): $(SRCS)
	@ $(CC) $(CFLAG) $(SRCS) -o $(REPLACER)
	@printf "[$(GREEN)SUCCESS$(RESET)] Replacer compiled.\n"

clean:
	@ $(RM) $(REPLACER)
	@printf "[$(YELLOW)SUCCESS$(RESET)] Executable removed.\n"

fclean:
	@ $(RM) $(REPLACER)
	@printf "[$(YELLOW)SUCCESS$(RESET)] Executable removed.\n"

re: fclean all
