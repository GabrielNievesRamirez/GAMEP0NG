CC = g++
CFLAGS = -std=c++11 -Iinclude
SFML_LIBS = -lsfml-graphics -lsfml-window -lsfml-system

all: juego

juego: obj/main.o obj/Bola.o obj/Paleta.o obj/Marcador.o
	$(CC) $(CFLAGS) obj/main.o obj/Bola.o obj/Paleta.o obj/Marcador.o -o bin/juego $(SFML_LIBS)

obj/main.o: src/main.cpp
	$(CC) $(CFLAGS) -c src/main.cpp -o obj/main.o

obj/Bola.o: src/Bola.cpp include/Bola.hpp
	$(CC) $(CFLAGS) -c src/Bola.cpp -o obj/Bola.o

obj/Paleta.o: src/Paleta.cpp include/Paleta.hpp
	$(CC) $(CFLAGS) -c src/Paleta.cpp -o obj/Paleta.o

obj/Marcador.o: src/Marcador.cpp include/Marcador.hpp
	$(CC) $(CFLAGS) -c src/Marcador.cpp -o obj/Marcador.o

clean:
	rm -f obj/*.o bin/juego
