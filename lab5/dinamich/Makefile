lab5dyn : main.o fs 
	gcc main.o -L. -lfsdyn -o lab5dyn
main.o :
	gcc -c main.c
fs : f1.o
	gcc -shared -o libfsdyn.so f1.o f2.o
f1.o :
	gcc -fPIC -c f1.c f2.c
clean :
	rm main.o f1.o f2.o libfsdyn.so lab5dyn
