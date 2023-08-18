#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024
/*handled printf function by amine mohamed and aicha lahnite*/
/* some flgs */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

/**
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};


/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: The format.
 * @fm_t: The function associated.
 */
typedef struct fmt fmt_t;

int _printf(const char *format, ...);
int hand_pr(const char *frmt, int *index, va_list lst, char bfr[],
	int flgs, int wid, int pre, int size);
/* wid handler */
int handle_write_char(char c, char bfr[],
	int flgs, int wid, int pre, int size);
int write_number(int is_positive, int ind, char bfr[],
	int flgs, int wid, int pre, int size);
int write_num(int ind, char bff[], int flgs, int wid, int pre,
	int length, char padd, char extra_c);
int write_pointer(char bfr[], int ind, int length,
	int wid, int flgs, char padd, char extra_c, int padd_start);
int write_unsgnd(int is_negative, int ind,
char bfr[],
	int flgs, int wid, int pre, int size);

/****************** UTILS ******************/
int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);
long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);

/* Funtions to print chars and strings */
int print_char(va_list types, char bfr[],
	int flgs, int wid, int pre, int size);
int print_string(va_list types, char bfr[],
	int flgs, int wid, int pre, int size);
int print_percent(va_list types, char bfr[],
	int flgs, int wid, int pre, int size);

/* Functions to print numbers */
int print_int(va_list types, char bfr[],
	int flgs, int wid, int pre, int size);
int print_binary(va_list types, char bfr[],
	int flgs, int wid, int pre, int size);
int unsigned_prnt(va_list types, char bfr[],
	int flgs, int wid, int pre, int size);
int print_octal(va_list types, char bfr[],
	int flgs, int wid, int pre, int size);
int print_hexadecimal(va_list types, char bfr[],
	int flgs, int wid, int pre, int size);
int print_hexa_upper(va_list types, char bfr[],
	int flgs, int wid, int pre, int size);

int print_hexa(va_list types, char map_to[],
char bfr[], int flgs, char flag_ch, int wid, int pre, int size);

/* Function to print non printable characters */
int print_non_printable(va_list types, char bfr[],
	int flgs, int wid, int pre, int size);

/* Funcion to print memory address */
int print_pointer(va_list types, char bfr[],
	int flgs, int wid, int pre, int size);

/* Funciotns to handle other specifiers */
int get_flg(const char *format, int *i);
int get_wid(const char *format, int *i, va_list list);
int get_pre(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);

/*Function to print string in reverse*/
int print_reverse(va_list types, char bfr[],
	int flgs, int wid, int pre, int size);

/*Function to print a string in rot 13*/
int print_rot13string(va_list types, char bfr[],
	int flgs, int wid, int pre, int size);

/* wid handler */
int handle_write_char(char c, char bfr[],
	int flgs, int wid, int pre, int size);
int write_number(int is_positive, int ind, char bfr[],
	int flgs, int wid, int pre, int size);
int write_num(int ind, char bff[], int flgs, int wid, int pre,
	int length, char padd, char extra_c);
int write_pointer(char bfr[], int ind, int length,
	int wid, int flgs, char padd, char extra_c, int padd_start);

int write_unsgnd(int is_negative, int ind,
char bfr[],
	int flgs, int wid, int pre, int size);



#endif /* MAIN_H */
