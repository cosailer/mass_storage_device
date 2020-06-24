//ram flash header

#ifndef _RAMFLASH_H_
#define _RAMFLASH_H_

#include <util/delay.h>
#include <stdio.h>

#define RAMFLASH_PAGE_SIZE                  512
#define RAMFLASH_PAGES                      2
#define VIRTUAL_MEMORY_BYTES                ((uint32_t)RAMFLASH_PAGES * RAMFLASH_PAGE_SIZE)
#define RAM_SIZE                            VIRTUAL_MEMORY_BYTES

uint8_t ram_chip[RAM_SIZE];
const uint8_t boot_bin[1024];
uint32_t count;

uint16_t vcc;
int32_t  temperature;

void RAMflash_Init(void);
void RAMflash_OP(void);
uint16_t read_vcc(void);
int32_t  read_inter_temperature(void);

#endif
