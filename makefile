main : main.o transaction.o
	g++-7 -o main main.o transaction.o

main.o : main.cpp comma_parser.h transaction.h
	g++-7 -c main.cpp
transaction.o : transaction.cpp transaction.h
	g++-7 -c transaction.cpp

clean :
	rm main main.o transaction.o
