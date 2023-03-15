CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -pedantic -I./include
LDFLAGS =
SRC_DIR = src
OBJ_DIR = include
BIN_DIR = bin
TARGET = $(BIN_DIR)/principal

SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.h)
DEPS = $(OBJS:.h=)

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(LDFLAGS) -o $@ $^

$(OBJ_DIR)/%.h: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

clean:
	$(RM) $(OBJS) $(DEPS) $(TARGET)

-include $(DEPS)