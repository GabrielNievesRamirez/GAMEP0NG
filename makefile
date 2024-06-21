# Makefile para compilar el proyecto Pong

# Compilador y banderas
CXX = g++
CXXFLAGS = -std=c++11 -Iinclude

# Archivos y directorios
SRCDIR = src
OBJDIR = obj
BINDIR = bin
SOURCES = $(wildcard $(SRCDIR)/*.cpp)
OBJECTS = $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SOURCES))
EXECUTABLE = $(BINDIR)/juego

# Reglas de construcción
$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(EXECUTABLE) -lsfml-graphics -lsfml-window -lsfml-system

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpieza
clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
