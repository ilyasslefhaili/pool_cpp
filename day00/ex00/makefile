NAME = megaphone

CC = c++

CFLAGS = -Wall -Wextra -Werror

SRCS = megaphone.cpp

OBJS = $(subst *.cpp,*.o,$(SRCS))

all : $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o  $(NAME)

clean :
		rm -rf *.o

fclean : clean
		rm -rf $(NAME)

re : fclean all
		