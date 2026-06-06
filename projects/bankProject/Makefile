CXX = g++
CXXFLAGS = -Wall -std=c++14 -Iinclude

TARGET = output/app

SRC = source/AppMain.cpp \
      source/generalOperation.cpp \
      source/accountDetails.cpp \
      source/fileHandling.cpp \
      source/bankingOperation.cpp \
      source/moneyTransfer.cpp \
      source/transactionHistory.cpp

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