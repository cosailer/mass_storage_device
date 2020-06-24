default: boot.bin

boot.bin: boot.asm
	nasm -f bin boot.asm -o boot.bin
	
boot:
	qemu-system-x86_64 -hda boot.bin
	
code:
	xxd -i boot.bin
	
	