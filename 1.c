#include <stdio.h>

int functionCalled; // defining a global variable
// a function which increases functionCalled by 1 everytime it runs
void func()
{
    printf("func() was called\n");
    functionCalled++;
}
int main()
{
    // use of local variables
    int a = 1;
    int b = 2;
    printf("sum of a and b : %d\n", a + b); // some calculation using local variables

    // use of global variables
    func();
    func();
    func();
    func();
    printf("the function func() was called %d times\n", functionCalled);
}