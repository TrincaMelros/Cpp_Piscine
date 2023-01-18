MAKEFLAGS	+=	--quiet

			# Library Name #
NAME		=
MEGAPHONE	=	megaphone

			# Mandatory Variables #
SRCS			=	./megaphone.cpp

			# Compiling Variables #
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f

			# Color Variables #
GREEN		= \e[0;32m
RED			= \e[0;31m
YELLOW		= \e[0;33m
RESET		= \e[0m

all: $(MEGAPHONE)

$(NAME): all

$(MEGAPHONE): $(SRCS)
	@ $(CC) $(CFLAG) $(SRCS) -o $(MEGAPHONE)
	@printf "[$(GREEN)SUCCESS$(RESET)] MEGAPHONE compiled.\n"

clean:
	@ $(RM) $(MEGAPHONE)
	@printf "[$(YELLOW)SUCCESS$(RESET)] Executable removed.\n"

fclean:
	@ $(RM) $(MEGAPHONE)
	@printf "[$(YELLOW)SUCCESS$(RESET)] Executable removed.\n"

re: fclean all
