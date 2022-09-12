
SRC = src
INC = include
OBJ = obj
BIN = bin
CXX = g++
CPPFLAGS = -Wall -g  -I$(INC) -c

# TEST

TEST_EX1:
	./$(BIN)/Ex1

TEST_EX2:
	./$(BIN)/Ex2

TEST_EX3:
	./$(BIN)/Ex3

TEST_EX4:
	./$(BIN)/Ex4

# COMPILATION

EX1:
	$(CXX) -O2 $(SRC)/Ex1.cpp -o $(BIN)/Ex1

EX2:
	$(CXX) -O2 $(SRC)/Ex2.cpp -o $(BIN)/Ex2

EX3:
	$(CXX) -O2 $(SRC)/Ex3.cpp -o $(BIN)/Ex3

EX4:
	$(CXX) -O2 $(SRC)/Ex4.cpp -o $(BIN)/Ex4


# CLEAN

clean :
	rm $(BIN)/Ex*
	


	