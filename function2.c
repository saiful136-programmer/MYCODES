#include <stdio.h>

int a=5, b = 10;    // অথবা parameter হিসেবে পাঠাতে পারিস

void fun1()
{
    int a = 10;
    int c;

    c = b / a;
    printf("%d\n", c);
}

int main()
{
    fun1();    // Function call

    return 0;
}