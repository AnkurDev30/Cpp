CXX = g++
CXXFLAGS = -Wall -std=c++14 -Iinclude

TARGET = source/app

SRC = source/AppMain.cpp \
      source/generalOperation.cpp \
      source/accountDetails.cpp \
      source/fileHandling.cpp \
      source/bankingOperation.cpp \
      source/moneyTransfer.cpp \
      source/transactionHistory.cpp

OBJ = $(SRC:.cpp=.o)

$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)