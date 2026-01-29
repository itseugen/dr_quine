NAME	:= Colleen
CC		:= cc
CFLAGS	:= -Wall -Wextra -Werror

OBJ_DIR	:= ./objs

C_SRC	:= main.c

OBJS	:= $(addprefix $(OBJ_DIR)/, $(C_SRC:%.c=%.o))

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

run: $(NAME)
	./Colleen > out
	diff main.c out