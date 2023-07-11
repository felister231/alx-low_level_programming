#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include "main.h"

void print_error(const char *error_message) {
	fprintf(stderr, "%s\n", error_message);
	exit(98);
}

void display_elf_header(const Elf64_Ehdr *elf_header) {
	printf("Magic: ");
	for (int i = 0; i < EI_NIDENT; i++) {
		printf("%02x ", elf_header->e_ident[i]);
	}
	printf("\n");
	printf("Class: %d-bit\n", elf_header->e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);
	printf("Data: %s\n", elf_header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version: %d\n", elf_header->e_ident[EI_VERSION]);
	printf("OS/ABI: %s\n", elf_header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Unknown");
	printf("ABI Version: %d\n", elf_header->e_ident[EI_ABIVERSION]);
	printf("Type: %s\n", elf_header->e_type == ET_EXEC ? "EXEC (Executable file)" : "Unknown");
	printf("Entry point address: 0x%lx\n", (unsigned long)elf_header->e_entry);
}

int main(int argc, char *argv[]) {
	if (argc != 2) {
		print_error("Usage: elf_header elf_filename");
	}

	const char *elf_filename = argv[1];

	int fd = open(elf_filename, O_RDONLY);
	if (fd == -1) {
		print_error("Error: Could not open the specified file");
	}

	Elf64_Ehdr elf_header;
	ssize_t bytes_read = read(fd, &elf_header, sizeof(Elf64_Ehdr));
	if (bytes_read == -1 || bytes_read != sizeof(Elf64_Ehdr)) {
		print_error("Error: Could not read the ELF header");
	}

	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
			elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
			elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
			elf_header.e_ident[EI_MAG3] != ELFMAG3) {
		print_error("Error: The specified file is not an ELF file");
	}

	display_elf_header(&elf_header);

	close(fd);

	return 0;
}
