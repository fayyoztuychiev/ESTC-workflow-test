result.exe:	main.o func.o
	gcc -o result.exe main.o func.o

main.o:	main.c main.h
	gcc -c main.c

func.o:	func.c func.h
	gcc -c func.c

clean:
	rm -f main.o func.o result.exe

.PHONY: clean