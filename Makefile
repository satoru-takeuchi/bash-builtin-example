TARGETS = hello myhello.so

.PHONY: all clean benchmark

all: $(TARGETS)

myhello.so: myhello.c
	$(CC) $(CFLAGS) -I/usr/include/bash -I/usr/include/bash/include -fpic -shared -o $@ $^

clean:
	-$(RM) $(TARGETS)

benchmark: all
	./benchmark
