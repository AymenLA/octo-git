#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>
#include "sudoku.h"

uXobject sudoku_init(void)
{
	//int
	uXobject  uXplayer;

	uXplayer.user = 1;
	uXplayer.data.path = 10;
	uXplayer.data.goal = 50;
	uXplayer.data.moves = 15;
	uXplayer.data.finished = 0;
	
	return(uXplayer);
}
