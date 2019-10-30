ListaContigua.o: ListaContigua.c
	gcc ListaContigua.c -c
main.o: main.c
	gcc main.c -c

a.out: main.o ListaContigua.o
	gcc main.o ListaContigua.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o ListaContigua.o
