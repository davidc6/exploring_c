# ref: https://www.gnu.org/software/make/manual/html_node/index.html#SEC_Contents

# compiler creates object files for sources files
# and links them together
# define "objects" variable so we can reuse it
objects = main.o operations.o utils.o 

# main executable
atm: $(objects)
	gcc -o atm $(objects)

# dependencies
main.o : main.c 
operations.o : operations.c operations.h
utils.o : utils.c utils.h

# phony target is just a name for the recipe
# use phony targets to avoid name conflicts and performance
.PHONY : clean

# cleans / removes files
clean: 
	rm atm $(objects)
