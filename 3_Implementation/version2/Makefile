#Target : Dependencies
#<TAB>commands

build : calendar_main.c calendar.c
	gcc calendar_main.c calendar.c -o calendar.out

Run : build
	./calendar.out

clean:
	rm -rf *.o *.out *.i *.s