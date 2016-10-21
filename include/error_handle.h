#ifndef _ERROR_HANDLE_H
#define _ERROR_HANDLE_H

/*************************************************
Public Function
**************************************************/

/*************************************************
Static Function
**************************************************/

/*************************************************
Local variables
**************************************************/
#define ERROR_PRINT(ERROR_CODE) {printf("error occured : %d\n",ERROR_CODE);}
/*************************************************
Defines 
**************************************************/
#define RETURN_OK 		1
#define RETURN_NOK 		0

#define NOT_INITIALIZED		-1
#define NOT_FILLED		-2
#define NOT_FINISHED		-3
/*************************************************
core code
**************************************************/


#endif //_ERROR_HANDLE_H
