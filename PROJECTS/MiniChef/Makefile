# Compiler and flags
CC = gcc
CFLAGS = -Wall -g

# Source files
SRCS = minichef.c base64.c caesar.c hex.c url.c rot.c xor.c bin_to_ascii.c rot47.c

# Object files (generated from source files)
OBJS = $(SRCS:.c=.o)

# Executable
EXEC = minichef

# Default target
all: $(EXEC)

# Linking the object files into the final executable
$(EXEC): $(OBJS)
	$(CC) $(OBJS) -o $(EXEC)

# Compiling the source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files and executable
clean:
	rm -f $(OBJS) $(EXEC)

# Rebuild everything
rebuild: clean all

# Run the program (optional)
run: $(EXEC)
	./$(EXEC)

.PHONY: all clean rebuild run
