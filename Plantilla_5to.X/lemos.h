/****************************************************************************************************
 *
 * @file		${file_name}
 * @brief		Breve descripci�n del objetivo del M�dulo
 * @date		${date}
 * @author		Ing. Marcelo Trujillo
 * @version
****************************************************************************************************/

/****************************************************************************************************
 *** MODULO  <Nombre del m�dulo>
****************************************************************************************************/

#ifndef LEMOS_H
#define	LEMOS_H

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
 *   Se escriben en mayusculas y estar precedidas por la identificaci�n del
 *   m�dulo segidas de un '_' . Si el nombre esta compuesto por mas de una
 *   palabra, las mismas deben separarce con un '_'.
 *   ej: #define  DEF_OCTETE_NMR_BITS.
****************************************************************************************************/

/****************************************************************************************************
 *** MACROS GLOBALES
 *   Se escriben en mayusculas y estar precedidas por la identificaci�n del
 *   m�dulo segidas de un '_' . Si el nombre esta compuesto por mas de una
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
 *   se escriben en CamelCase y estan precedidas por la identificaci�n del 
 *   m�dulo segida de un _ 
 *   ej:  extern MEM_POOL  MemPoolHeap; 
****************************************************************************************************/


/****************************************************************************************************
 *** PROTOTIPOS DE FUNCIONES GLOBALES
 *  se escriben en CamelCase, estan precedidas por la identificaci�n del m�dulo 
 *  seguida de un _. No se decaran en el .h
 *  ej  void Clk_DateTimer(paraetros)
 **********************************************************************************************************************************/

void Send_Disp(unsigned char NroDisp,unsigned char Dato);
void Send_4Disp(unsigned char Umil,unsigned char Cent,unsigned char Dec,unsigned char Uni);
void leds(unsigned int velocidad);
void tic_timer0(void);

//variables globales
unsigned char mux_tout,bot_tout;
unsigned int  led_tout;

#define MUX_SET 4;          //multiplicador de mux_tout
#define BOT_REL 100;         //multiplicador de BOT_REL


#endif	/* LEMOS_H */

