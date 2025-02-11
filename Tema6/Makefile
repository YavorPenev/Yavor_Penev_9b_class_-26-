all:safeadd.exe safesubtract.exe safedivide.exe safemultiply.exe

safeint.o:
	gcc -c safeint.c -o safeint.o

safeadd.exe: safeint.o
	gcc safeadd.c safeint.o -o safeadd.exe

safesubtract.exe: safeint.o
	gcc safesubtract.c safeint.o -o safesubtract.exe

safedivide.exe: safeint.o
	gcc safedivide.c safeint.o -o safedivide.exe

safemultiply.exe: safeint.o
	gcc safemultiply.c safeint.o -o safemultiply.exe

clean:
	del *.exe
	del *.o
