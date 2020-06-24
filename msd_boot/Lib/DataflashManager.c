/*
             LUFA Library
     Copyright (C) Dean Camera, 2020.

  dean [at] fourwalledcubicle [dot] com
           www.lufa-lib.org
*/

/*
  Copyright 2020  Dean Camera (dean [at] fourwalledcubicle [dot] com)

  Permission to use, copy, modify, distribute, and sell this
  software and its documentation for any purpose is hereby granted
  without fee, provided that the above copyright notice appear in
  all copies and that both that the copyright notice and this
  permission notice and warranty disclaimer appear in supporting
  documentation, and that the name of the author not be used in
  advertising or publicity pertaining to distribution of the
  software without specific, written prior permission.

  The author disclaims all warranties with regard to this
  software, including all implied warranties of merchantability
  and fitness.  In no event shall the author be liable for any
  special, indirect or consequential damages or any damages
  whatsoever resulting from loss of use, data or profits, whether
  in an action of contract, negligence or other tortious action,
  arising out of or in connection with the use or performance of
  this software.
*/

/** \file
 *
 *  Functions to manage the physical Dataflash media, including reading and writing of
 *  blocks of data. These functions are called by the SCSI layer when data must be stored
 *  or retrieved to/from the physical storage media. If a different media is used (such
 *  as a SD card or EEPROM), functions similar to these will need to be generated.
 */

#define  INCLUDE_FROM_DATAFLASHMANAGER_C
#include "DataflashManager.h"

//  Read blocks (OS blocks, not Dataflash pages) to the storage medium, the board Dataflash IC(s), from
//  the pre-selected data OUT endpoint. This routine reads in OS sized blocks from the endpoint and writes
//  them to the Dataflash in Dataflash page sized blocks.
//
//  \param[in] BlockAddress  Data block starting address for the write sequence
void RAM_ReadBlock(const uint16_t BlockAddress)
{
	uint16_t currAddr = BlockAddress*512;
	uint8_t *ptr = ram_chip;
	ptr+=currAddr;
	
	// Write the entire read block Buffer to the host
	Endpoint_Write_Stream_LE(ptr, VIRTUAL_MEMORY_BLOCK_SIZE, NULL);
	Endpoint_ClearIN();
}

//  Read blocks (OS blocks, not Dataflash pages) to the storage medium, the board Dataflash IC(s), from
//  the pre-selected data OUT endpoint. This routine reads in OS sized blocks from the endpoint and writes
//  them to the Dataflash in Dataflash page sized blocks.
//
//  \param[in] BlockAddress  Data block starting address for the write sequence
void RAM_WriteBlock(const uint16_t BlockAddress)
{
	uint16_t currAddr = BlockAddress*512;
	uint8_t *ptr = ram_chip;
	ptr+=currAddr;

	// Buffer the entire block to be written from the host 
	Endpoint_Read_Stream_LE(ptr, VIRTUAL_MEMORY_BLOCK_SIZE, NULL);
	Endpoint_ClearOUT();
}

