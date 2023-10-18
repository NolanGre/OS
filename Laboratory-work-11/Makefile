GCC = gcc -Wall
INCLUDE = -I/usr/include
LIB = -L/usr/lib64 -lpq
OBJ = connect_calculator.o calculator.o remove_calculator.o add_calculator.o get_calculator.o
calculator: $(OBJ)
	$(GCC) $(OBJ) -o calculator $(INCLUDE) $(LIB)
calculator.o: calculator.c
	$(GCC) -c -o calculator.o calculator.c $(INCLUDE) $(LIB)
connect_calculator.o: connect_calculator.c
	$(GCC) -c -o connect_calculator.o connect_calculator.c $(INCLUDE) $(LIB)
remove_calculator.o: remove_calculator.c
	$(GCC) -c -o remove_calculator.o remove_calculator.c $(INCLUDE) $(LIB)
add_calculator.o: add_calculator.c
	$(GCC) -c -o add_calculator.o add_calculator.c $(INCLUDE) $(LIB)
get_calculator.o: get_calculator.c
	$(GCC) -c -o get_calculator.o get_calculator.c $(INCLUDE) $(LIB)

install:
	cp ./calculator /home/sverdan/bin
clean:
	rm -f *.o
	rm -f calculator
