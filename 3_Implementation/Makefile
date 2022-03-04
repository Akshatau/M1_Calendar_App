#Target : Dependencies
#<TAB>commands
	
PROJ_NAME=calendar
SRC=calendar_unity_main.c src/calendar.c test/test_calendar.c unity/unity.c 

#To check if the OS is Windows or Linux and set the executable file extenstion
ifdef OS
	RM=del /q
	FixPath= $(subst /,\,$1)
	EXEC = exe
else
    ifeq ($(shell uname),Linux)
   	RM=rm -rf
	FixPath= $1
	EXEC = out
	endif
endif
unit_testing : 

build : $(SRC)
	gcc $(SRC)  -Iinc -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

Run : build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

static_analysis:
	cppcheck --enable = all $(SRC)

dynamic_analysis: build
	valgrind ./$(call FixPath ,$(PROJ_NAME).$(EXEC))

coverage:
	gcc -fprofile-arcs -ftest-coverage $(SRC) -Iinc -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm ./${PROJECT_NAME}
	gcov -a src/calendar_main.c src calendar.c

clean:
	$(RM) $(call FixPath.$(BUILD_DIR)/*.out)