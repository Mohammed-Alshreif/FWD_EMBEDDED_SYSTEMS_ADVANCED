#include "TYPES.h"
#ifndef STK_H
#define STK_H


void STK_Init(void);
void STK_control(u8 TIME_SECONDS, void(*PTR_FUNC)(void));

#endif