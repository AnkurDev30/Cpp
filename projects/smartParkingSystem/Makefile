CXX = g++
CXXFLAGS = -Wall -std=c++14 -g -Iinclude

TARGET = output/app

SRC = source/appMain.cpp \
      source/vehicleDetails.cpp \
      source/genralOperation.cpp \
	  source/parkingOperation.cpp

OBJ = $(patsubst source/%.cpp,output/%.o,$(SRC))

all: output $(TARGET)

output:
	mkdir -p output

$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

output/%.o: source/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f output/*.o $(TARGET)