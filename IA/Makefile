EXEC = ia

CPP = g++
LD = g++

CPPFLAGS = -Iinclude -std=c++0x
LDFLAGS = -lpthread
DEBUG = -g
WARNING = -Wall -pedantic
OPTIMIZE = 
#-O3

SRC = $(wildcard src/*.cxx)
OBJ = $(subst src, obj, $(SRC:.cxx=.o))

all: obj $(EXEC)

$(EXEC): $(OBJ)
	$(LD) $(DEBUG) $(WARNING) $(LDFLAGS) -o $@ $^

obj:
	@mkdir obj

obj/%.o: src/%.cxx
	$(CPP) $(CPPFLAGS) $(OPTIMIZE) $(DEBUG) $(WARNING) -o $@ -c $^

clean:
	rm -f $(OBJ)

mrproper: clean
	rm -f $(EXEC)
	rm -f gmon.out

install: $(EXEC)
	cp $(EXEC) /usr/local/bin/

rebuild: mrproper all

.PHONY: clean mrproper
