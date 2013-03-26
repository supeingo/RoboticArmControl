/*==========================================================================*
 * C OBJECT HEADER                                                          *
 *--------------------------------------------------------------------------*
 *                                                                          *
 * Object   : PWM.h                                                         *
 *                                                                          *
 * Purpose  : PWM Header file for robotic arm project                       *
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

#ifndef __PWM_H
#define __PWM_H

/*--------------------------------------------------------------------------*
 * Public Types :-                                                          *
 *--------------------------------------------------------------------------*/
 
/* None */
 
/*--------------------------------------------------------------------------*
 * Public Data :-                                                           *
 *--------------------------------------------------------------------------*/
  
#define PWM_MID_DEFAULT 0X1250
  
/*--------------------------------------------------------------------------*
 * Public Operations :-                                                     *
 *--------------------------------------------------------------------------*/
  
void PWM__SendCmd ( const int PWMIndex, const int PWMValue );

void PWM__Reset ( void );

#endif