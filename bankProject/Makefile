CXX = g++
CXXFLAGS = -Wall -std=c++11

TARGET = app

SRC = AppMain.cpp \
      accountDetails.cpp \
      fileHandling.cpp \
      bankingOperation.cpp \
      moneyTransfer.cpp \
      transactionHistory.cpp

OBJ = $(SRC:.cpp=.o)

$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJ) $(TARGET)