INCLUDES = simple_queue/inc/
SRCS	= simple_queue/src/*.c
MAIN = examples/*.c
CC = gcc

all:
	$(CC) -o bin $(MAIN) $(SRCS) -I $(INCLUDES)