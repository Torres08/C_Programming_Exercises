
SRC = src
INC = include
OBJ = obj
BIN = bin
CXX = g++
DATOS = data
CPPFLAGS = -Wall -g  -I$(INC) -c

# TEST

all: EX1 EX2 EX3 EX4

TEST_EX1:
	./$(BIN)/Ex1

TEST_EX2:
	./$(BIN)/Ex2 ./$(DATOS)/notes.txt

TEST_EX3:
	./$(BIN)/Ex3 ./$(DATOS)/booknames.txt

TEST_EX4:
	./$(BIN)/Ex4 ./$(DATOS)/listeDentiers.txt

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
	

autor:
	@echo "Torres Ramos, Juan Luis"
	