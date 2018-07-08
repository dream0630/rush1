SRCS_TEST =	Box.cpp			\
		ConveyorBelt.cpp	\
		ElfOfPePeNoel.cpp	\
		GiftPaper.cpp		\
		LittlePony.cpp		\
		Test.cpp		\
		TablePePeNoel.cpp	\
		Teddy.cpp		\
		Toy.cpp			\
		Wrap.cpp	

SRCS_SWAG =	Box.cpp			\
		ConveyorBelt.cpp	\
		ElfOfPePeNoel.cpp	\
		GiftPaper.cpp		\
		LittlePony.cpp		\
		swag_main.cpp		\
		TablePePeNoel.cpp	\
		Teddy.cpp		\
		Toy.cpp			\
		Wrap.cpp		\

SRCS =	Box.cpp			\
	ConveyorBelt.cpp	\
	ElfOfPePeNoel.cpp	\
	GiftPaper.cpp		\
	LittlePony.cpp		\
	super_main.cpp		\
	TablePePeNoel.cpp	\
	Teddy.cpp		\
	Toy.cpp			\
	Wrap.cpp		\

OBJS =	$(SRCS:.cpp=.o)

OBJS_TEST = $(SRCS_TEST:.cpp=.o)

OBJS_SWAG = $(SRCS_SWAG:.cpp=.o)

NAME =	dream0630

NAME_TEST = dream0630test

NAME_SWAG = dream0630swag

CPPFLAGS = -W -Wall -Wextra -Werror
CPPFLAGS += -I./

CC = g++

RM = rm -rf

all: $(NAME)

test: $(NAME_TEST)

swag: $(NAME_SWAG)

$(NAME_SWAG): $(OBJS_SWAG)
	$(CC) -o $(NAME_SWAG) $(OBJS_SWAG)

$(NAME_TEST): $(OBJS_TEST)
	$(CC) -o $(NAME_TEST) $(OBJS_TEST)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CPPFLAGS)

clean:
	$(RM) $(OBJS) && $(RM) $(OBJS_TEST) $(OBJS_SWAG)

fclean: clean
	$(RM) $(NAME) $(NAME_TEST) $(NAME_SWAG)

re: fclean all

.PHONY: all clean fclean re
