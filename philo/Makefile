CC = cc
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -rf
NAME = philo
SRCS = philosophers.c \
		operations/actions.c \
		operations/routine.c \
		utils/print_act.c \
		utils/starting.c \
		utils/validation.c \
		utils/atoi_ws.c \
		utils/get_time.c \
		utils/initial.c

$(NAME):  all

all:  $(PHILO)

${NAME}: $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(NAME)
fclean: clean
	$(RM) $(PHILO) 

re: fclean all

.PHONY: all clean fclean re