# Nome do executável final
EXEC = sistema_funcionarios

# Compilador e flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

# Arquivos-fonte
SRC = main.cpp funcionario.cpp dev.cpp gerente.cpp estagi.cpp

# Arquivos objeto (gerados a partir dos .cpp)
OBJ = $(SRC:.cpp=.o)

# Regra padrão: compilar tudo e gerar o executável
all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJ)

# Limpeza dos arquivos objeto e do executável
clean:
	rm -f *.o $(EXEC)

# Regra para recompilar apenas os .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
