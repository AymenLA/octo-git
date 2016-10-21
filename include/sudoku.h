#ifndef _SUDOKU_H
#define _SUDOKU_H

#include <inttypes.h>
/*************************************************
Public Function
**************************************************/

/*************************************************
Static Function
**************************************************/

/*************************************************
Local variables
**************************************************/
int level;

typedef struct
{
	uint32_t path;
	uint32_t goal;
	uint8_t	 moves;
	uint8_t  finished;
}uXproper;

typedef struct
{
	uint32_t user;
	uXproper data;
	
}uXobject;
/*************************************************
Defines 
**************************************************/
#define LEVEL  1 // 1 :only 3 numbers are taken
				 // 2 :only 4 numbers are taken
				 // 3 :only 5 numbers are taken
				 // 4 :only 6 numbers are taken
/*************************************************
core code
**************************************************/
int sudoku_run(void);
uXobject sudoku_init(void); // chose level
int sudoku_fill(uint32_t level); // fill the matrice

#endif //_SUDOKU_H
