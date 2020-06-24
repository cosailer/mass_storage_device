# boot:

create the MBR payload using NASM

install the nasm and qemu-system to test the created payload

process:
make       #create payload boot.bin
make boot  #run the boot.bin in the qemu emulator
make code  #convert the boot.bin into c header file that can be copied to msd_boot project
 
