//ram flash definition

#include <avr/pgmspace.h>
#include "RAMflash.h"

const uint8_t boot_bin[1024] PROGMEM =
{
  0xb8, 0xc0, 0x07, 0x8e, 0xd8, 0xb8, 0xe0, 0x07, 0x8e, 0xd0, 0xbc, 0x00,
  0x20, 0xe8, 0x20, 0x00, 0x6a, 0x00, 0xe8, 0x33, 0x00, 0x83, 0xc4, 0x02,
  0x68, 0xe8, 0x00, 0xe8, 0x3c, 0x00, 0x83, 0xc4, 0x02, 0x68, 0xfa, 0x00,
  0xe8, 0x33, 0x00, 0x83, 0xc4, 0x02, 0xe8, 0x4c, 0x00, 0xc3, 0xfa, 0xf4,
  0x55, 0x89, 0xe5, 0x60, 0xb4, 0x07, 0xb0, 0x00, 0xb7, 0x0e, 0xb9, 0x00,
  0x00, 0xb6, 0x18, 0xb2, 0x4f, 0xcd, 0x10, 0x61, 0x89, 0xec, 0x5d, 0xc3,
  0x55, 0x89, 0xe5, 0x60, 0x8b, 0x56, 0x04, 0xb4, 0x02, 0xb7, 0x00, 0xcd,
  0x10, 0x61, 0x89, 0xec, 0x5d, 0xc3, 0x55, 0x89, 0xe5, 0x60, 0x8b, 0x76,
  0x04, 0xb7, 0x00, 0xb3, 0x00, 0xb4, 0x0e, 0x8a, 0x04, 0x83, 0xc6, 0x01,
  0x0c, 0x00, 0x74, 0x04, 0xcd, 0x10, 0xeb, 0xf3, 0x61, 0x89, 0xec, 0x5d,
  0xc3, 0xb4, 0x01, 0xcd, 0x16, 0x74, 0x08, 0xb4, 0x00, 0xcd, 0x16, 0x3c,
  0x6c, 0x74, 0x2b, 0xb8, 0x00, 0x00, 0xbb, 0x00, 0x8c, 0xb5, 0x00, 0xb1,
  0x02, 0xb6, 0x00, 0xb2, 0x80, 0xb4, 0x02, 0xb0, 0x01, 0xcd, 0x13, 0xb0,
  0x00, 0xb4, 0x86, 0xb9, 0x09, 0x00, 0xba, 0x00, 0x00, 0xcd, 0x15, 0xe8,
  0x26, 0x00, 0x68, 0x30, 0x01, 0xe8, 0xaa, 0xff, 0xeb, 0xc7, 0x68, 0x1c,
  0x01, 0xe8, 0xa2, 0xff, 0xb8, 0x00, 0x00, 0xbb, 0x00, 0x8c, 0x8e, 0xc0,
  0xb5, 0x00, 0xb1, 0x02, 0xb6, 0x00, 0xb2, 0x80, 0xb4, 0x03, 0xb0, 0x01,
  0xcd, 0x13, 0xeb, 0xa9, 0x66, 0xb9, 0x00, 0x10, 0x00, 0x00, 0xb4, 0x0e,
  0x67, 0x8a, 0x01, 0x0c, 0x00, 0x74, 0x08, 0xcd, 0x10, 0x66, 0x83, 0xc1,
  0x01, 0xeb, 0xef, 0xc3, 0x61, 0x74, 0x6d, 0x65, 0x67, 0x61, 0x33, 0x32,
  0x75, 0x34, 0x20, 0x64, 0x65, 0x6d, 0x6f, 0x0d, 0x0a, 0x00, 0x70, 0x72,
  0x65, 0x73, 0x73, 0x20, 0x27, 0x6c, 0x27, 0x20, 0x74, 0x6f, 0x20, 0x74,
  0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x6f, 0x6e, 0x62, 0x6f, 0x61, 0x72,
  0x64, 0x20, 0x6c, 0x65, 0x64, 0x0d, 0x0a, 0x00, 0x3e, 0x3e, 0x20, 0x63,
  0x6f, 0x6d, 0x6d, 0x61, 0x6e, 0x64, 0x20, 0x73, 0x65, 0x6e, 0x74, 0x20,
  0x21, 0x0d, 0x0a, 0x00, 0x0d, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xaa, 0x68, 0x65, 0x6c, 0x6c,
  0x6f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00
};

//initialize ram flash with saved payload
void RAMflash_Init(void)
{
     //uint8_t value = 0xFF;
     
     count = 0;
     
     for( int n = 0; n < RAM_SIZE; n++ )
     {
           //ram_chip[n] = value;
           //value++;
           ram_chip[n] = pgm_read_byte(&(boot_bin[n]));
     }
}

//zero sector 2
void RAMflash_Clear(void)
{
     for( int n = 512; n < 1024; n++ )
     {
           ram_chip[n] = 0;
     }
}

//operation performed at request, e.g. when a read disk command is received
void RAMflash_OP(void)
{
    // sector 2 initial address
    int SEC_2 = 512;
    
    char buffer[64];
    int size = 0;
    
    //read the vcc and the internal temperature
    //be aware that the channel and reference is changed when reading these two values
    vcc = read_vcc();
    temperature = read_inter_temperature();
    
    //convert to char buffer
    size = sprintf(buffer, "count=%lu, vcc = %u mv, temperature = %ld degree", count, vcc, temperature);
    RAMflash_Clear();
    
    //copy them to sector 2
    for(int i = 0; i < size; i++)
    {
        ram_chip[SEC_2+i] = buffer[i];
    }
    
    count++;
}

//read internal vcc voltage
uint16_t read_vcc()
{
    uint16_t vcc_mv;

    //reset
    ADCSRA = 0;
    ADCSRB = 0;
    ADMUX  = 0;

    //read 1.1V band gap against AVcc
    ADMUX |= (1<<REFS0)|(1<<MUX4)|(1<<MUX3)|(1<<MUX2)|(1<<MUX1);
    
    _delay_ms(5);
    
    //10-bit resolution with ADC clock speed of 50 kHz to 200 kHz
    //Enable ADC, set prescaller to /64, ADC clock of 16mHz/64=125kHz
    ADCSRA |= (1<<ADEN)|(1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0);
    
    _delay_ms(125);
    
    //actual read
    ADCSRA |= (1<<ADSC);
    while ((ADCSRA & (1<<ADSC)) != 0);
    
    _delay_ms(20);
    
    //calculate AVcc in mV, 1.1*1024*1000/ADC
    vcc_mv = (uint16_t)(1126400/ADC); 
    return vcc_mv;
}

//read internal temperature sensor
int32_t read_inter_temperature()
{
    int32_t temp_c;

    //reset
    ADCSRA = 0;
    ADCSRB = 0;
    ADMUX  = 0;
    
    //setup ADC to use internal 2.56V reference
    //ADC right adjust result
    ADMUX |= (1<<REFS1)|(1<<REFS0)|(1<<MUX2)|(1<<MUX1)|(1<<MUX0);
    ADCSRB |= (1<<MUX5);

    _delay_ms(5);
    
    //10-bit resolution with ADC clock speed of 50 kHz to 200 kHz
    //Enable ADC, set prescaller to /64, ADC clock of 16mHz/64=125kHz
    ADCSRA |= (1<<ADEN)|(1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0);
    
    _delay_ms(125);
    
    //dummy read
    ADCSRA |= (1<<ADSC);
    while ((ADCSRA & (1<<ADSC)) != 0);
    
    _delay_ms(20);
    
    // start a new conversion
    ADCSRA |= (1<<ADSC);
    while ((ADCSRA & (1<<ADSC)) != 0);
    
    // Calculate the temperature in C, offset = 275
    temp_c = ADC - 275;
    
    return temp_c;
}
