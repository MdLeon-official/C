CC = gcc
CFLAGS = -Wall -g

SRCS = minichef.c base64.c caesar.c hex.c url.c rot.c xor.c bin_to_ascii.c rot47.c

OBJS = $(SRCS:.c=.o)

EXEC = minichef

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(OBJS) -o $(EXEC)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)

rebuild: clean all

run: $(EXEC)
	./$(EXEC)

.PHONY: all clean rebuild run
