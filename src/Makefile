#########################################################
#
# project name : SDL_initiation
# date : 01-17-2016
# author : aymen.laouini@ymail.com
#
# %.o : it is the relative object file of a source file
# %.c : it is the relative source file of an object file
# $@  : it is what we find on the left of the colomn ":"
# $^  : it is what we find on the right of the colomn ":"
# $<  : it is the first item in the dependencies list
#
#########################################################
IDIR=../include
CC=gcc
EXEC=helloMAIN

CFLAGS=-I$(IDIR)
SFLAGS=`sdl-config --cflags --libs`

ODIR=obj
LIBS=-lSDL_image -lSDL_ttf

_DEPS = *.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) $(SFLAGS) $(LIBS)

$(EXEC): $(OBJ)
	gcc -o $@ $^ $(CFLAGS) $(SFLAGS) $(LIBS)
	chmod +x $(EXEC)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(IDIR)/*~ 
mrproper: clean
	rm -rf $(EXEC)
