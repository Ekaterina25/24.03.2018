#include <stdio.h>
#include <limits.h>


int main()
{
 
    printf("Переменные типа \'signed int\' принимают значения в диапазоне от %d до %d\n", INT_MIN, INT_MAX);
    printf("Переменные типа \'unsigned int\' принимают значения в диапазоне от 0 до %u\n", UINT_MAX);
    printf("Переменные типа \'signed char\' принимают значения в диапазоне от %d до %d\n", CHAR_MIN, CHAR_MAX);
    printf("Переменные типа \'unsigned char\' принимают значения в диапазоне от 0 до %d\n", UCHAR_MAX);
    printf("Переменные типа \'signed short int\' принимают значения в диапазоне от %d до %d\n", SHRT_MIN, SHRT_MAX);
    printf("Переменные типа \'unsigned short int\' принимают значения в диапазоне от 0 до %d\n", USHRT_MAX);
    printf("Переменные типа \'signed long int\' принимают значения в диапазоне от %ld до %ld\n", LONG_MIN, LONG_MAX);
    printf("Переменные типа \'unsigned long int\' принимают значения в диапазоне от 0 до %lu\n", ULONG_MAX);
   

    return 0;
}