#Target : Dependencies
#<TAB>commands

build : project_main.c main.c
	gcc project_main.c main.c -o main.out

Run : build
	./main.out

clean:
	rm -rf *.o *.out *.i *.s