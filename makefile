record:main.o show.o save.o rev.o del.o del_all.o mod.o add.o stud_sort.o
	cc main.c show.c save.c rev.c del.c del_all.c mod.c add.c sort.c -o record

main.o:main.c
	cc -c main.c

stud_show.o:show.c
	cc -c show.c

stud_save.o:save.c
	cc -c save.c

stud_rev.o:rev.c
	cc -c rev.c
        
stud_del.o:del_all.c
	cc -c del_all.c

stud_mod.o:mod.c
	cc -c mod.c

stud_add.o:add.c
	cc -c add.c

stud_del_all.o:del_all.c
	cc -c del_all.c

stud_sort.o:sort.c
	cc -c sort.c

