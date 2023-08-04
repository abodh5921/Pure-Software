 

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra

# Directory structure
HEADER_DIR = header
SRC_DIR = src
BUILD_DIR = build

# Source files
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)

# Object files
OBJ_FILES = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRC_FILES))

# Target executable
TARGET = my_program

# Default target
# all: $(TARGET)

# Rule to build the executable
$(TARGET): $(OBJ_FILES)
	$(CC) $(CFLAGS) $^ -o $@

# Rule to compile source files into object files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Create the build directory if it doesn't exist
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Clean intermediate files and the executable
clean: 
	rm -rf $(BUILD_DIR) $(TARGET)
