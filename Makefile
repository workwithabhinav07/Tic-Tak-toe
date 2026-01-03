# The compiler we want to use
CC = gcc

# The flags: -Wall means "Show All Warnings" (Good for exams!)
CFLAGS = -Wall -g

# The target file we want to build
TARGET = tictactoe

# The default rule: "make" will run this
all: $(TARGET)

# How to build the game
$(TARGET): main.c
	$(CC) $(CFLAGS) main.c -o $(TARGET)

# How to clean up junk files: "make clean" will run this
clean:
	rm -f $(TARGET) *.o
