questao_1 = ./bin/geometrica
questao_2 = ./bin/anterior

INC_DIR = ./include
SRC_DIR = ./src
OBJ_DIR = ./build
BIN_DIR = ./bin
DOC_DIR = ./doc

CC = g++

RM = rm -rf

OBJS_Q1 = ./build/questao_1/main.o ./build/questao_1/area.o ./build/questao_1/perimetro.o ./build/questao_1/volume.o ./build/questao_1/calcula.o
OBJS_Q2 = ./build/questao_2/main.o ./build/questao_2/fatorial.o ./build/questao_2/primalidade.o

CPPFLAGS = -Wall -pg -pedantic -ansi -std=c++11

.PHONY: clean debug dir doxy questao_1 questao_2

all: questao_1 questao_2

debug: CPPFLAGS += -g -O0
debug: questao_1 questao_2

questao_1: $(questao_1)

$(questao_1): CPPFLAGS += -I. -I$(INC_DIR)/questao_1/
$(questao_1): $(OBJS_Q1)
	$(CC) $^ $(CPPFLAGS) -o $@

$(OBJ_DIR)/questao_1/main.o: $(SRC_DIR)/questao_1/main.cpp 
	$(CC) -c $(CPPFLAGS) $^ -o $@

$(OBJ_DIR)/questao_1/calcula.o: $(SRC_DIR)/questao_1/calcula.cpp $(INC_DIR)/questao_1/calcula.h
	$(CC) -c $(CPPFLAGS) $< -o $@

$(OBJ_DIR)/questao_1/area.o: $(SRC_DIR)/questao_1/area.cpp $(INC_DIR)/questao_1/area.h
	$(CC) -c $(CPPFLAGS) $< -o $@

$(OBJ_DIR)/questao_1/volume.o: $(SRC_DIR)/questao_1/volume.cpp $(INC_DIR)/questao_1/volume.h
	$(CC) -c $(CPPFLAGS) $< -o $@

$(OBJ_DIR)/questao_1/perimetro.o: $(SRC_DIR)/questao_1/perimetro.cpp $(INC_DIR)/questao_1/perimetro.h
	$(CC) -c $(CPPFLAGS) $< -o $@

questao_2: $(questao_2)

$(questao_2): CPPFLAGS += -I. -I$(INC_DIR)/questao_2/
$(questao_2): $(OBJS_Q2)
	$(CC) $^ $(CPPFLAGS) -o $@

$(OBJ_DIR)/questao_2/main.o: $(SRC_DIR)/questao_2/main.cpp
	$(CC) -c $(CPPFLAGS) $^ -o $@

$(OBJ_DIR)/questao_2/fatorial.o: $(SRC_DIR)/questao_2/fatorial.cpp $(INC_DIR)/questao_2/fatorial.h
	$(CC) -c $(CPPFLAGS) $< -o $@

$(OBJ_DIR)/questao_2/primalidade.o: $(SRC_DIR)/questao_2/primalidade.cpp $(INC_DIR)/questao_2/primalidade.h
	$(CC) -c $(CPPFLAGS) $< -o $@ 

doxy:
	$(RM) $(DOC_DIR)/*
	doxygen Doxyfile

clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*

dir:
	mkdir -p bin
	mkdir -p build
	mkdir -p build/questao_1
	mkdir -p build/questao_2
	mkdir -p build/questao_3
	mkdir -p include
	mkdir -p include/questao_1
	mkdir -p include/questao_2
	mkdir -p include/questao_3
	mkdir -p src
	mkdir -p src/questao_1
	mkdir -p src/questao_2
	mkdir -p src/questao_3
	mkdir -p doc
