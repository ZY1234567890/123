Start:quick_sort.o insort.o
	gcc quick_sort.o insort.o -o main
quicksort.o:quick_sort.c
	gcc quick_sort.c -c
insort.o:insort.c
	gcc insort.c -c
clean:
	rm quick_sort.o insort.o -rf
