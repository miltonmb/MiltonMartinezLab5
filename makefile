main:	main.o matriz.o
	g++ main.o matriz.o -o matriz
	
main.o:	main.cpp matriz.h
	g++ -c main.cpp 

matriz.o:	matriz.cpp matriz.h
	g++ -c matriz.cpp 

clean:	
	rm *.o matriz