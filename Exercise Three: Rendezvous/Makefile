#Name:			Filip Rusiecki	=
#Date:			30/03/2023	=
#Student Number:	C00250721	=
#========================================
#Makefile used to contain commands to compile projects
#=====================================================


#global variables
OBJFILES= main.o Semaphore.o
OUTPUT= Semaphore.out
CC=g++
CFLAGS= -std=c++11 -pthread -g
DEBUGFLAGS = -DEBUG

#This rule says that each .o file depends on a .cpp file of the same name
%.o: %.cpp
	$(CC) -c -o $@ $< $(CFLAGS) $(DEBUGFLAGS)

ALL: $(OBJFILES)
	$(CC) -o $(OUTPUT) $(OBJFILES) $(CFLAGS) $(DEBUGFLAGS)
	make CLEAN


#Debug Rule
DEBUG: DEBUGFLAGS
DEBUG: ALL



#this is customary and just deletes all .o files
CLEAN:
	rm *.o
