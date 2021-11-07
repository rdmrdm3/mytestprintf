NAME	= tester.out

SRCS	= mytest.c

CC		= gcc

CFLAGS	= -Wall -Werror -Wextra

LIB		= ftprintf

LIB_DIR	= ../printf/

all		: $(NAME)

$(NAME)	: 
	$(CC) $(SRCS) $(CFLAGS) -o $(NAME) -l$(LIB) -L$(LIB_DIR)

fclean	: 
	rm -f $(NAME)

re		: fclean all

.PHONY	: all fclean re
