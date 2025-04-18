# Compiler and flags
CXX := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -Iinc

# Directories
SRC_DIR := src
OBJ_DIR := obj
BIN_DIR := bin

# Source and object files
SRCS := $(wildcard $(SRC_DIR)/*.cpp)
OBJS := $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))

# Executable name
TARGET := $(BIN_DIR)/OpenStreetMapRoutePlanner

# Default target
all: $(TARGET)

# Link object files to create the executable
$(BIN_DIR)/OpenStreetMapRoutePlanner: $(OBJ_DIR)/main.o $(OBJ_DIR)/board.o
	@if not exist $(BIN_DIR) mkdir $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile source files into object files
$(OBJ_DIR)/%.o: src/%.cpp
	@if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build artifacts
clean:
	@if exist obj rmdir /s /q obj
	@if exist bin rmdir /s /q bin
