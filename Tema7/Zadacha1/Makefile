all: main.exe

quadraticroots.o:
	gcc -c quadraticroots.c -o quadraticroots.o

main.exe: quadraticroots.o
	gcc main.c quadraticroots.o -lm -o main.exe   

clean:
	del *.exe
	del *.o