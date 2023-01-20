/*
    This file contains a function that returns the next number in the fibonacci sequence every time it's called.
*/

int fibonacciNext()
{
    /*
    Static variables because it was requested, and it makes sense since it allows us to only set them once in the
    programs lifetime and for them to still contain their value even when they're out of scope (meaning after the
    function has returned a value/inbetween calls to the function).
    */
    static int num1 = 0;
    static int num2 = 1;
    // Using a temporary variable to calculate the next number and to move it into the "current numbers"
    int temp = num1 + num2;
    num1 = num2;
    num2 = temp;
    return temp;
}