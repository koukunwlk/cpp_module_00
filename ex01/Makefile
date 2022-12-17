NAME = incaBook

HEADERS_PATH = ./includes/
SRCS_PATH = ./src/
OBJS_PATH = ./objs/

CC = clang++
CFLAGS =  -std=c++98 -Wall -Wextra -Werror -g -I $(HEADERS_PATH) 

RM = rm -rf
MKDIR = mkdir -p

SRC_FILES = main.cpp PhoneBook.cpp Contact.cpp

SOURCES = $(addprefix $(SRCS_PATH), $(SRC_FILES))
OBJ_FILES = $(patsubst %.cpp, %.o, $(SRC_FILES))
OBJECTS = $(addprefix $(OBJS_PATH), $(OBJ_FILES))

all: $(NAME)

$(NAME): $(OBJECTS) 
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS) 

$(OBJS_PATH)%.o: $(SRCS_PATH)%.cpp
	@$(MKDIR) $(OBJS_PATH)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS_PATH)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all run clean fclean re 