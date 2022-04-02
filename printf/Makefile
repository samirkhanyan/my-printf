LIBFT = ./libft/libft.a

N_TEMP = temp.a

NAME = libftprintf.a

SRCS =	ft_printf.c \
		sources/print_pointer.c \
		sources/printhex.c \
		sources/ft_printunsigned.c \
		sources/printstr.c \
		sources/printnumber.c \
		
SURPL_O = ft_printf.o \
		sources/print_pointer.o \
		sources/printhex.o \
		sources/ft_printunsigned.o \
		sources/printstr.o \
		sources/printnumber.o \	

CC = cc

FLAGS = -c -Wall -Wextra -Werror

INCLUDES = -I./

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(MAKE) bonus -C ./libft
	cp libft/libft.a $(NAME)
	$(CC) $(FLAGS) $(INCLUDES) $(SRCS)
	ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(MAKE) clean -C ./libft
	rm -rf $(SURPL_O) 
	rm -rf $(OBJS)
	rm -rf *.o

fclean : clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)
	rm -rf *.o

re : fclean all

.PHONY : all clean fclean re
