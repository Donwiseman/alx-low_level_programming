#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <elf.h>
#include <stdlib.h>
#include <sys/types.h>

/**
 * check_iden - check if an ELF file
 * @e_ident: identity bits of the file
 * @av: name executable program was called
 */
void check_iden(char *e_ident, char *av)
{
	char c;
	char e_m[] = "ELF file - it has the wrong magic bytes at the start";
	int x;

	for (x = 0; x < 4; x++)
	{
		c = e_ident[x];
		if (c != ELFMAG0 && c != ELFMAG1 && c != ELFMAG2 &&
				c != ELFMAG3)
		{
			fprintf(stderr, "%s: Error: Not an %s\n", av, e_m);
			exit(98);
		}
	}
}
/**
 * print_magic - print the magic numbers of the ELF file
 * @e_ident: identity bits of the ELF file
 *
 * Return: returns nothing
 */
void print_magic(char *e_ident)
{
	char mag[] = "Magic: ";
	int x;

	printf("  %-9s", mag);
	for (x = 0; x < 16; x++)
	{
		if (x == 15)
		{
			printf("%02x\n", e_ident[x]);
			break;
		}
		printf("%02x ", e_ident[x]);
	}
}

/**
 * print_class - prints the class of the ELF file
 * @e_ident: ELF identity bytes
 * @av: name the executable C file was called
 *
 * Return: 1 if class 32, 2 if class 64 or 0 if invalid
 */
int print_class(char *e_ident, char *av)
{
	char e_64[] = "ELF64", e_32[] = "ELF32", class[] = "Class:";

	if (e_ident[4] == 0 || e_ident[4] > 2)
	{
		fprintf(stderr, "%s: Error: Invalid Class\n", av);
		exit(98);
	}
	printf("  %-35s", class);
	if (e_ident[4] == 1)
	{
		printf("%s\n", e_32);
		return (1);
	}
	else
	{
		printf("%s\n", e_64);
		return (2);
	}
}

/**
 * print_data - prints the data type of the ELF file
 * @e_ident: ELF identity bytes
 * @av: name the executable C file was called
 *
 * Return:nothing
 */
void print_data(char *e_ident, char *av)
{
	char lit[] = "2's complement, little endian";
	char big[] = "2's complement, big endian", data[] = "Data:";

	if (e_ident[5] == 0 || e_ident[5] > 2)
	{
		fprintf(stderr, "%s: Error: Invalid data encoding\n", av);
		exit(98);
	}
	printf("  %-35s", data);
	if (e_ident[5] == 1)
		printf("%s\n", lit);
	if (e_ident[5] == 2)
		printf("%s\n", big);
}

/**
 * print_ver - prints the version of the ELF file
 * @e_ident: ELF identity bytes
 *
 * Return:nothing
 */
void print_ver(char *e_ident)
{
	char cur[] = "1 (current)";
	char ver[] = "Version:";

	printf("  %-35s", ver);
	if (e_ident[6] == 1)
		printf("%s\n", cur);
	else
		printf("%u\n", e_ident[6]);
}

/**
 * print_abi - prints the ABI of the ELF file
 * @e_ident: ELF identity bytes
 *
 * Return:nothing
 */
void print_abi(char *e_ident)
{
	char osabi[] = "OS/ABI:";
	char *abi[] = {
		"UNIX - System V",
		"HP-UX",
		"UNIX - NetBSD",
		"UNIX - GNU",
		"GNU/Hurd",
		"Filler Alias",
		"UNIX - Solaris",
		"UNIX - AIX",
		"IRIX",
		"UNIX - FreeBSD",
		"Tru64 UNIX",
		"Modesto",
		"OpenBSD",
		"OpenVMS",
		"NonStop Kernel",
		"AROS",
		"FenixOS",
		"Nuxi CloudABI",
		"Stratus Technologies OpenVOS"
	};
	unsigned int x = (unsigned int) e_ident[7];

	printf("  %-35s", osabi);
	if (x > 17)
		printf("<<unknown: %u>\n", x);
	else
		printf("%s\n", abi[x]);
}

/**
 * print_abiver - prints the ABI version of the ELF file
 * @e_ident: ELF identity bytes
 *
 * Return:nothing
 */
void print_abiver(char *e_ident)
{
	char ver[] = "ABI Version:";

	printf("  %-35s", ver);
	printf("%u\n", e_ident[8]);
}

/**
 * print_type - prints the type of the ELF file
 * @e_ident: data containing the e_type bytes
 */
void print_type(char *e_ident)
{
	char *types[] = {
		"NONE (None)",
		"REL (Relocatable file)",
		"EXEC (Executable file)",
		"DYN (Shared object file)",
		"CORE (Core file)"
	};
	char para[] = "Type:";
	int x = (int) e_ident[16];

	printf("  %-35s", para);
	if (x > 4)
		printf("HIPROC (Processor Specific)\n");
	else
		printf("%s\n", types[x]);
}

/**
 * print_addr64 - print the entry address
 * @ptr: binary data containing address
 */
void print_addr64(unsigned long *ptr)
{
	char *addr = "Entry point address:";

	printf("  %-35s", addr);
	printf("0x%lx\n", *ptr);
}

/**
 * print_addr32 - print the entry address
 * @ptr: binary data containing address
 */
void print_addr32(unsigned int *ptr)
{
	char *addr = "Entry point address:";

	printf("  %-35s", addr);
	printf("0x%x\n", *ptr);
}

/**
 * print_err - print error of wrong usage
 * @av: name executable file was called
 */
void print_err(char *av)
{
	fprintf(stderr, "Error: Usage: %s elf_filename\n", av);
	exit(98);
}

/**
 * main - prints the ELF header of an ELF file
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 if executes with no error or 98 otherwise
 */
int main(int ac, char **av)
{
	char e_ident[18];
	int fd, class;
	unsigned int p32;
	unsigned long int p64;

	if (ac > 2)
		print_err(av[0]);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Failed to open %s\n", av[1]);
		return (98);
	}
	if ((read(fd, e_ident, 18)) == -1)
	{
		fprintf(stderr, "Failed to open %s\n", av[1]);
		return (98);
	}
	check_iden(e_ident, av[0]);
	printf("ELF HEADER:\n");
	print_magic(e_ident);
	class = print_class(e_ident, av[0]);
	print_data(e_ident, av[0]);
	print_ver(e_ident);
	print_abi(e_ident);
	print_abiver(e_ident);
	print_type(e_ident);
	lseek(fd, 6, SEEK_CUR);
	if (class == 1)
	{
		read(fd, &p32, 4);
		print_addr32(&p32);
	}
	else
	{
		read(fd, &p64, 8);
		print_addr64(&p64);
	}
	close(fd);
	return (0);
}
