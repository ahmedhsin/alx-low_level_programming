#ifndef MAI__H
#define MAI__H
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include<math.h>
#include <stdlib.h>
/**
 * _islower - check Lower Case Char
 * _putchar - prototype.
 * print_alphabet - print a..z
 * print_alphabet_x10 - print a..z 10 times
 * Return: nothing.
 */
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif
