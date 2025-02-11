all: proceses.c taskmanager.exe
proceses.c:
	gcc -c processes.c -o processes.o
#gcc -c processes1.c -o processes1.o
taskmanager.exe:
	gcc taskmanager.c processes.o -o taskmanager.exe
#gcc taskmanager.c processes1.o -o taskmanager.exe
clean:
	del *.exe
	del *.o