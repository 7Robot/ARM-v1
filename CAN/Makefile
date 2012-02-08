SRC = $(wildcard src/*.c)
SHAREDSRC = $(wildcard src/shared/*.c)
SHAREDOBJ = $(subst src/shared, obj, $(SHAREDSRC:.c=.o))
EXEC = $(subst src, bin, $(SRC:.c=))

CC = gcc
LD = gcc
MAKE = make

CFLAGS = -std=gnu99 -Iinclude -Isrc/shared
LDFLAGS = -Llibcan -lcan -lpthread
DEBUG = -g
WARNING = -Wall -pedantic
OPTIMIZE = -O3

all: libcan/libcan.so obj $(SHAREDOBJ) bin $(EXEC)

libcan/libcan.so:
	@make -C libcan

obj:
	@mkdir obj

bin:
	@mkdir bin

obj/%.o: src/shared/%.c
	$(CC) $(DEBUG) $(WARNING) $(OPTIMIZE) $(CFLAGS) -o $@ -c $^

bin/%: src/%.c $(SHAREDOBJ)
	$(LD) $(DEBUG) $(WARNING) $(OPTIMIZE) $(CFLAGS) $(LDFLAGS) -o $@ $^

clean:
	@rm -rf obj

mrproper: clean
	@rm -rf bin

rebuild: mrproper all

librebuild: mrproper
	@make -C libcan mrproper
	@make all

install-lib:
	@make -C libcan install

install:
	cp bin/* /usr/local/bin
	cp libcan/include/libcan.h /usr/local/include

.PHONY: clean mrproper
