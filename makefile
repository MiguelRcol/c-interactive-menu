CC     = gcc
CFLAGS = -Wall -Wextra -Wpedantic -std=c11

# Source files
SRCS = \
	main.c \
	src/math.c \
	src/age.c \
	src/weather.c \
	src/helper.c

# Object files (same paths, but .o extension)
OBJS = $(SRCS:.c=.o)

# Final binary name
TARGET = menu

# Default target
all: $(TARGET)

# Link step: build the final executable from all object files
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

# Compile step: rule to build any .o from its .c
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean generated files
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
# --- IGNORE ---