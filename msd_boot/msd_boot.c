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


#include "msd_boot.h"

//  LUFA Mass Storage Class driver interface configuration and state information. This structure is
//  passed to all Mass Storage Class driver functions, so that multiple instances of the same class
//  within a device can be differentiated from one another.

USB_ClassInfo_MS_Device_t Disk_MS_Interface =
{
    .Config =
    {
        .InterfaceNumber           = INTERFACE_ID_MassStorage,
        .DataINEndpoint            =
        {
            .Address           = MASS_STORAGE_IN_EPADDR,
            .Size              = MASS_STORAGE_IO_EPSIZE,
            .Banks             = 1,
        },
        .DataOUTEndpoint           =
        {
            .Address           = MASS_STORAGE_OUT_EPADDR,
            .Size              = MASS_STORAGE_IO_EPSIZE,
            .Banks             = 1,
        },
        .TotalLUNs                 = TOTAL_LUNS,
    },
};


//  Main program entry point. This routine contains the overall program flow, including initial
//  setup of all components and the main program loop.
int main(void)
{
    SetupHardware();

    //LEDs_SetAllLEDs(LEDMASK_USB_NOTREADY);
    GlobalInterruptEnable();

    while(true)
    {
        MS_Device_USBTask(&Disk_MS_Interface);
        USB_USBTask();
    }
}

// Configures the board hardware and chip peripherals for the demo's functionality.
void SetupHardware(void)
{
    // Disable watchdog if enabled by bootloader/fuses
    MCUSR &= ~(1 << WDRF);
    wdt_disable();

    // Disable clock division
    clock_prescale_set(clock_div_1);

    // Hardware Initialization
    LEDs_Init();
    RAMflash_Init();
    USB_Init();
}

// Event handler for the library USB Connection event.
void EVENT_USB_Device_Connect(void)
{
    //LEDs_SetAllLEDs(LEDMASK_USB_ENUMERATING);
    LEDs_Blink(LEDS_LED3);
}

// Event handler for the library USB Disconnection event.
void EVENT_USB_Device_Disconnect(void)
{
    //LEDs_SetAllLEDs(LEDMASK_USB_NOTREADY);
    LEDs_Blink(LEDS_LED3);
}

// Event handler for the library USB Configuration Changed event.
void EVENT_USB_Device_ConfigurationChanged(void)
{
    bool ConfigSuccess = true;

    ConfigSuccess &= MS_Device_ConfigureEndpoints(&Disk_MS_Interface);

    //LEDs_SetAllLEDs(ConfigSuccess ? LEDMASK_USB_READY : LEDMASK_USB_ERROR);
    LEDs_Blink(LEDS_LED3);
}

// Event handler for the library USB Control Request reception event.
void EVENT_USB_Device_ControlRequest(void)
{
    MS_Device_ProcessControlRequest(&Disk_MS_Interface);
}

// Mass Storage class driver callback function the reception of SCSI commands from the host, which must be processed.
//
//  \param[in] MSInterfaceInfo  Pointer to the Mass Storage class interface configuration structure being referenced

bool CALLBACK_MS_Device_SCSICommandReceived(USB_ClassInfo_MS_Device_t* const MSInterfaceInfo)
{
    bool CommandSuccess;
    
    LEDs_Blink(LEDS_LED3);
    //LEDs_SetAllLEDs(LEDMASK_USB_BUSY);
    CommandSuccess = SCSI_DecodeSCSICommand(MSInterfaceInfo);
    //LEDs_SetAllLEDs(LEDMASK_USB_READY);

    return CommandSuccess;
}

