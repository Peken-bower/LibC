# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LDFLAGS =
SRC_DIR = .
OBJ_DIR = obj
BIN_DIR = bin

# Find all source files
SRCS := $(shell find $(SRC_DIR) -type f -name '*.c')
OBJS := $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))
NUM_SRCS := $(words $(SRCS))

# Targets
all: $(OBJS)
	@echo "🚀 Compilation completed. 🚀"

$(OBJ_DIR)/%.o : %.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR) $(BIN_DIR)
	@echo "🧹 Cleaned: $(OBJ_DIR) $(BIN_DIR) 🧹"

.PHONY: all clean
