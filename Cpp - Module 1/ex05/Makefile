MAKEFLAGS	+=	--quiet

			# Library Name #
NAME	=
HARL	=	harl

			# Mandatory Variables #
SRCS	=	./*.cpp

			# Compiling Variables #
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f

			# Color Variables #
GREEN		= \e[0;32m
RED			= \e[0;31m
YELLOW		= \e[0;33m
RESET		= \e[0m

all: $(HARL)

$(NAME): all

$(HARL): $(SRCS)
	@ $(CC) $(CFLAG) $(SRCS) -o $(HARL)
	@printf "[$(GREEN)SUCCESS$(RESET)] Harl compiled.\n"

clean:
	@ $(RM) $(HARL)
	@printf "[$(YELLOW)SUCCESS$(RESET)] Executable removed.\n"

fclean:
	@ $(RM) $(HARL)
	@printf "[$(YELLOW)SUCCESS$(RESET)] Executable removed.\n"

re: fclean all
