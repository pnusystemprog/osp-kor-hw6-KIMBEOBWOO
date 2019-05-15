OBJS=regist.o print.o search.o delete1.o phoneBookMain.o
CFLAGS=-Wall -g
all:main
%.o:%.c
	gcc -c -o $@ ${CFLAGS} $<
main:$(OBJS)
	gcc -o main $(OBJS)
clean:
	rm main $(OBJS)
