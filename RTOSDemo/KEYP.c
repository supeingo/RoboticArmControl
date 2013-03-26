/*==========================================================================*
 * C OBJECT                                                                 *
 *--------------------------------------------------------------------------*
 *                                                                          *
 * Object   : KEYP.c                                                        *
 *                                                                          *
 * Purpose  : KEYP C file for robotic arm project keypad                    *
 *                                                                          *
 *--------------------------------------------------------------------------*
 * Copyright 2013 University of the West of England                         *
 *--------------------------------------------------------------------------*
 *                                                                          *
 * Status   : UNDER WORK                                                    *
 *                                                                          *
 * Author   : Stephen King                                                  *
 *                                                                          *
 * Team:    : Stephen King, Jack Bennett, Steven Mann & Diyana Shakur       *
 *                                                                          *
 *==========================================================================*/

/*--------------------------------------------------------------------------*
 * System Wide Header Files :-                                              *
 *--------------------------------------------------------------------------*/
 
#include <stdbool.h>
#include <unistd.h>
#include <stdio.h> 
#include "sys/alt_stdio.h"
#include "system.h"
#include "altera_avalon_pio_regs.h"
#include "alt_types.h"
#include "altera_avalon_lcd_16207_regs.h"
#include "altera_avalon_lcd_16207.h" 
 
 /*-------------------------------------------------------------------------*
  * Object Header Files :-                                                  *
  *-------------------------------------------------------------------------*/
  
#include "KEYP.h"
  
/*--------------------------------------------------------------------------*
 * Private Data Types and Constants :-                                      *
 *--------------------------------------------------------------------------*/
  
/* None */ 
 
/*--------------------------------------------------------------------------*
 * Private Data Items :-                                                    *
 *--------------------------------------------------------------------------*/
  
/* Variable to hold keypad value */

int KeyCode; 
 
/*--------------------------------------------------------------------------*
 * Private Function Prototypes :-                                           *
 *--------------------------------------------------------------------------*/
  
/* None */
 
/*--------------------------------------------------------------------------*
 * Operation Code :-                                                        *
 *--------------------------------------------------------------------------*/
  
int KEYP__GetState( void )
{
    KeyCode = IORD_ALTERA_AVALON_PIO_DATA(KEYPAD_0_BASE);
    
    return KeyCode;
}
