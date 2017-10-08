objects = main.o transaction.o

main : $(objects)
	g++-7 -o main $(objects)

main.o : main.cpp comma_parser.h transaction.h
	g++-7 -c main.cpp
transaction.o : transaction.cpp transaction.h
	g++-7 -c transaction.cpp

.PHONY : clean
clean :
	rm main $(objects)
