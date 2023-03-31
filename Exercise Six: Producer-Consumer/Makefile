#Name:			Filip Rusiecki	=
#Date:			31/03/2023	=
#Student Number:	C00250721	=
#========================================
#Makefile used to contain commands to compile projects
#=====================================================

OBJFILES= main.o Semaphore.o
OUTPUT= main.out
CC=g++
CFLAGS= -std=c++11 -pthread -g -Wall
DEBUGFLAGS = -DEBUG

#This rule says that each .o file depends on a .cpp file of the same name
%.o: %.cpp
	$(CC) -c -o $@ $< $(CFLAGS) $(DEBUGFLAGS)

ALL: $(OBJFILES)
	$(CC) -o $(OUTPUT) $(OBJFILES) $(CFLAGS) $(DEBUGFLAGS)
	make CLEAN

DEBUG: DEBUGFLAGS
DEBUG: ALL



#this is customary and just deletes all .o files
CLEAN:
	rm -f$(OBJFILES)
