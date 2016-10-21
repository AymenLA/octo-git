#ifndef _DEBUG_HANDLE_H
#define _DEBUG_HANDLE_H

/*************************************************
Public Function
**************************************************/

/*************************************************
Static Function
**************************************************/

/*************************************************
Local variables
**************************************************/
#define DEBUG_PRINT(DEBUG_CODE,DEBUG_STYLE,DEBUG_COLOR) {\
						printf("debug message : "DEBUG_STYLE DEBUG_COLOR"%d"RESET_STYLE\
						DEFAULT_COLOR"\n",DEBUG_CODE);}
/*************************************************
Defines 
**************************************************/
#define RETURN_OK 		1
#define RETURN_NOK 		0

#define DATA_CODE		0
#define USER_CODE		1
#define MINUS_CODE		2
#define PRIMUS_CODE		3

#define RESET_STYLE		"\e[0m"
#define BOLD_STYLE		"\e[1m"
#define UNDERLINED_STYLE	"\e[4m"

#define DEFAULT_COLOR		"\e[39m"
#define RED_COLOR		"\e[31m"
#define GREEN_COLOR		"\e[32m"
#define YELLOW_COLOR		"\e[33m"
#define BLUE_COLOR		"\e[34m"

/*************************************************
core code
**************************************************/


#endif //_DEBUG_HANDLE_H
