all: compile link execute

compile:
	g++ -c main.cpp src/Entidade/Personagens/*.cpp src/Entidade/*.cpp src/Gerenciador/*.cpp src/Listas/*.cpp src/*.cpp -I "C:\Users\samsu\OneDrive\Documentos\SFML-2.6.1\include"

link:
	g++ *.o -Wall -o main -L "C:\Users\samsu\OneDrive\Documentos\SFML-2.6.1\lib" -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system

execute: 
	./main
	cls

clear-windows:
	del *.o
	cls

clear-linux:
	rm -rf *.o
	clear