CXX = g++
CXXFLAGS = -std=c++11 -Iinclude
LIBS = -lsfml-graphics -lsfml-window -lsfml-system

# Directorios
SRCDIR = src
OBJDIR = obj
BINDIR = bin
ASSETSDIR = assets

# Archivos fuente y objetos
SOURCES = $(wildcard $(SRCDIR)/*.cpp)
OBJECTS = $(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SOURCES))

# Nombre del ejecutable
TARGET = $(BINDIR)/juego

# Regla principal para construir el ejecutable
all: $(TARGET)

# Regla para compilar cada archivo objeto
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para enlazar el ejecutable final
$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGET) $(LIBS)

# Regla para copiar assets al directorio bin/
assets:
	cp -r $(ASSETSDIR)/* $(BINDIR)/

# Limpiar archivos generados
clean:
	rm -f $(OBJECTS) $(TARGET)

# Ejecutar el juego
run: $(TARGET) assets
	./$(TARGET)

# PHONY targets
.PHONY: all clean run