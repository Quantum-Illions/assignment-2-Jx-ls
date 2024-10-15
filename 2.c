#include <stdio.h>
int main()
{
    int integer, typeCastedDec;
    double decimal, typeCastedInt;
    printf("Enter to numbers an integer and a decimal:\n");
    scanf(" %d %lf", &integer, &decimal);
    printf("integer is :%d\ndecimal is :%lf\n", integer, decimal);
    typeCastedInt = (double)integer;
    typeCastedDec = (int)decimal;
    printf("after type casting :\ninteger is :%lf\ndecimal is :%d", typeCastedInt, typeCastedDec);
}