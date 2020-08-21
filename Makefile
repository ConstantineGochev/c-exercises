CFLAGS=-Wall -g
link:
		cc -Wall -g -DNDEBUG  -c -o ex22.o ex22.c
		cc -Wall -g -DNDEBUG ex22_main.c ex22.o -o ex22_main
clean:
		rm -f ex1 ex13 ex16 ex12 ex18 ex19 ex22_main *.o sort_int_file
