#Name:			Filip Rusiecki	=
#Date:			02/02/2023	=
#Student Number:	C00250721	=
#========================================
#Makefile used to contain commands to compile projects
#=====================================================

OBJFILES= main.o Semaphore.o
CC=g++
CFLAGS= -std=c++11 -pthread

#This rule says that each .o file depends on a .cpp file of the same name
%.o: %.cpp
	$(CC) -c -o $@ $< $(CFLAGS) $(DEBUGFLAGS)

ALL: Semaphore.o
	$(CC) -o Semaphore $(OBJFILES) $(CFLAGS) $(DEBUGFLAGS)


DEBUG: DEBUGFLAGS = -g -00
DEBUG: ALL


#this is customary and just deletes all .o files
CLEAN:
	rm *.o
