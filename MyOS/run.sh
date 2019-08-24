as boot.S -o boot.o
gcc -c kernel.c -o kernel.o -std=gnu99 -ffreestanding -O2 -Wall
gcc -T linker.ld -o MyOS.bin -ffreestanding -O2 -nostdlib kernel.o boot.o -lgcc
grub-file --is-x86-multiboot MyOS.bin
mkdir -p isodir/boot/grub
cp MyOS.bin isodir/boot/MyOS.bin
cp grub.cfg isodir/boot/grub/grub.cfg
grub-mkrescue -o MyOS.iso isodir
qemu-system-x86_64 -cdrom MyOS.iso 
