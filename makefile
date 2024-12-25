# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall

# Source files
SRCS = main.cpp munix.cpp

# Executable file
TARGET = munix

# Default target: compile and link the project
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

# Clean up object files and the executable
clean:
	rm -f $(TARGET)

.PHONY: clean
