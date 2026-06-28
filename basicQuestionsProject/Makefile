CC      = gcc
CXX     = g++

CFLAGS  = -Wall -Iinclude
CXXFLAGS= -Wall -std=c++17 -Iinclude

SRC_C   = source/arrayPgm.c \
          source/stringPgm.c
SRC_CPP = source/appMain.cpp

OBJ_C   = $(SRC_C:.c=.o)
OBJ_CPP = $(SRC_CPP:.cpp=.o)

TARGET  = app

all: $(TARGET)

$(TARGET): $(OBJ_C) $(OBJ_CPP)
	$(CXX) $(OBJ_C) $(OBJ_CPP) -o $(TARGET)

source/%.o: source/%.c
	$(CC) $(CFLAGS) -c $< -o $@

source/%.o: source/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f source/*.o $(TARGET)