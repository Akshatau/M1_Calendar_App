#Target : Dependencies
#<TAB>commands

build : calendar_main.c calendar.c test_calendar.c unity.c
	gcc calendar_main.c calendar.c test_calendar.c unity.c -o calendar.out -lm

Run : build
	./calendar.out

clean:
	rm -rf *.o *.out *.i *.s