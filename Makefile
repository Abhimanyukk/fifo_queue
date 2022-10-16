INCLUDES = simple_queue/inc/
SRCS	= simple_queue/src/*.c
MAIN = examples/*.c
CC = gcc
EXE = bin

all:
	$(CC) -o $(EXE) $(MAIN) $(SRCS) -I $(INCLUDES)

clean:
	@echo "Cleaning"
	rm $(EXE)