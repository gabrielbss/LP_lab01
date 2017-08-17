questao_1 = ./bin/geometrica
questao_2 = ./bin/questao_2
questao_3 = ./bin/questao_3

INC_DIR = ./include
SRC_DIR = ./src
OBJ_DIR = ./build
BIN_DIR = ./bin
DOC_DIR = ./doc

CC = g++

RM = rm -rf

OBJS_Q1 = ./build/q1/main.o ./build/q1/area.o ./build/q1/calcula.o ./build/q1/volume.o ./build/q1/perimetro.o

CPPFLAGS = -Wall -pedantic -ansi -std=c++11

.PHONY: doxy clean go questao_1 init

questao_1: $(questao_1)

$(questao_1): CPPFLAGS += -I. -I$(INC_DIR)/questao_1/
$(questao_1): $(OBJ_DIR) $(OBJS_Q1)
	$(CC) $(OBJS_Q1) $(CPPFLAGS) -o $@

$(OBJ_DIR)/q1/main.o: $(SRC_DIR)/questao_1/main.cpp 
	$(CC) -c $(CPPFLAGS) $^ -o $@

$(OBJ_DIR)/q1/area.o: $(SRC_DIR)/questao_1/area.cpp $(INC_DIR)/questao_1/area.h
	$(CC) -c $(CPPFLAGS) $< -o $@

$(OBJ_DIR)/q1/calcula.o: $(SRC_DIR)/questao_1/calcula.cpp $(INC_DIR)/questao_1/calcula.h
	$(CC) -c $(CPPFLAGS) $< -o $@

$(OBJ_DIR)/q1/volume.o: $(SRC_DIR)/questao_1/volume.cpp $(INC_DIR)/questao_1/volume.h
	$(CC) -c $(CPPFLAGS) $< -o $@

$(OBJ_DIR)/q1/perimetro.o: $(SRC_DIR)/questao_1/perimetro.cpp $(INC_DIR)/questao_1/perimetro.h
	$(CC) -c $(CPPFLAGS) $< -o $@


$(OBJ_DIR):
	mkdir $@

init:
	mkdir -p $(BIN_DIR)
	mkdir -p $(OBJ_DIR)
	mkdir -p $(OBJ_DIR)/q1
	mkdir -p $(DOC_DIR)

doxy:
	$(RM) $(DOC_DIR)/*
	doxygen Doxyfile

clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(DOC_DIR)/*
	$(RM) $(OBJ_DIR)/*.o

go: 
	./bin/geometrica

