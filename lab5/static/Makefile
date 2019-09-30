lab5 : main.o fs lib
	gcc main.o -L. -lfs -o lab5
main.o :
	gcc -c main.c
fs : f1.o
	ar rc libfs.a f1.o f2.o
f1.o :
	gcc -c f1.c f2.c
lib :
	ranlib libfs.a
clean :
	rm main.o f1.o f2.o libfs.a lab5
