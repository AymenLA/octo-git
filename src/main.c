#include <stdlib.h>
#include <stdio.h>
#include "sudoku.h"
#include "error_handle.h"
#include "debug_handler.h"
	
int main ( int argc, char *argv[])
{
	int Error_init = 0;
	uXobject uXplayer_one;
	printf("hello world!!\n");
	uXplayer_one = sudoku_init();
	DEBUG_PRINT(PRIMUS_CODE,BOLD_STYLE,RED_COLOR);
	DEBUG_PRINT(MINUS_CODE,BOLD_STYLE,GREEN_COLOR);

	if(uXplayer_one.user == 0)
	{
		ERROR_PRINT(NOT_INITIALIZED);
		return(EXIT_FAILURE);
	}

	DEBUG_PRINT(uXplayer_one.user,BOLD_STYLE,GREEN_COLOR);
	DEBUG_PRINT(uXplayer_one.data.path,BOLD_STYLE,GREEN_COLOR);
	DEBUG_PRINT(uXplayer_one.data.goal,BOLD_STYLE,GREEN_COLOR);
	DEBUG_PRINT(uXplayer_one.data.moves,BOLD_STYLE,GREEN_COLOR);
	
	return(EXIT_SUCCESS);
}

