CPP=g++
.SUFFICES: .o .cpp
.cpp.o:
	$(CPP) -c -o  $@ $<
main: main.o stash.o
	$(CPP) -o main main.o stash.o 
run: main
	./main
