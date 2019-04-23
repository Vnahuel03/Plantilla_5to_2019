/****************************************************************************************************
 *
 * @file		FW_InitKit.h
 * @brief		Este archivo contntiene lo referente a la inicializacion de la 
 *              placa
 * @date		22 de abril de 2019
 * @author		Nicollas Ferragamo nferragamo@est.frba.utn.edu.ar
 * @version     1.0.0
****************************************************************************************************/

/****************************************************************************************************
 *** MODULO
****************************************************************************************************/
#ifndef FW_InitKit_H
#define	FW_InitKit_H

#ifdef	__cplusplus
extern "C" {
#endif

#ifdef	__cplusplus
}
#endif

/****************************************************************************************************
 *** INCLUDES GLOBALES
****************************************************************************************************/

/****************************************************************************************************
 *** DEFINES GLOBALES
 *   Se escriben en mayusculas y estar precedidas por la identificación del
 *   módulo segidas de un '_' . Si el nombre esta compuesto por mas de una
 *   palabra, las mismas deben separarce con un '_'.
 *   ej: #define  DEF_OCTETE_NMR_BITS.
****************************************************************************************************/
#define LED5    LATDbits.LD0 
#define LED6    LATDbits.LD1
#define LED1    LATDbits.LD2
#define LED2    LATDbits.LD3
#define LED3    LATCbits.LC6
#define LED4    LATCbits.LC7

#define BOT1    PORTDbits.RD4
#define BOT2    PORTDbits.RD5
#define BOT3    PORTDbits.RD6
#define BOT4    PORTDbits.RD7

#define DISP1   LATAbits.LA4
#define DISP2   LATAbits.LA5
#define DISP3   LATEbits.LATE0
#define DISP4   LATEbits.LATE1
#define DOT     LATEbits.LATE2


/****************************************************************************************************
 *** MACROS GLOBALES
 *   Se escriben en mayusculas y estar precedidas por la identificación del
 *   módulo segidas de un '_' . Si el nombre esta compuesto por mas de una
 *   palabra, las mismas deben separarce con un '_'.
 *   ej: #define  MAYOR(A,B)     (A > B) ? A : B;
****************************************************************************************************/

/****************************************************************************************************
 *** TIPO DE DATOS GLOBALES
 *   se escriben en MAYUSCULA 
 *   ej: typedef  unsigned char  CPU_CHAR;  8 bits caracter
****************************************************************************************************/

/****************************************************************************************************
 *** VARIABLES GLOBALES
 *   se escriben en CamelCase y estan precedidas por la identificación del 
 *   módulo segida de un _ 
 *   ej:  extern MEM_POOL  MemPoolHeap; 
****************************************************************************************************/


/****************************************************************************************************
 *** PROTOTIPOS DE FUNCIONES GLOBALES
 *  se escriben en CamelCase, estan precedidas por la identificación del módulo 
 *  seguida de un _. No se decaran en el .h
 *  ej  void Clk_DateTimer(paraetros)
 ***************************************************************************************************/
void Kit_Init(void);
#endif	/* FW_InitKit_H */





void timer_ini13(void);
