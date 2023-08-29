
#include <iostream>

using namespace std;

int Add(int *a, int *b);    //Add two numbers and return the sum
void AddVal(int *a, int *b, int *result); //Add two numbers and return the sum through the third pointer argument
void Swap(int *a, int *b);  //Swap the value of two integers
void Factorial(int *a, int *result);   //Generate the factorial of a number and return that through the second pointer argument

int main()
{
    int a = 5, b = 6, c = 0, d = 1;

    cout << "Return value of the int Add(int *a, int *b); is " << Add(&a, &b) << endl;

    AddVal(&a, &b, &c);
    cout << "Result value of the void AddVal(int *a, int *b, int *result) is " << c << endl;

    cout << "Value of a before swapping is " << a << endl;
    cout << "Value of b before swapping is " << b << endl;
    Swap(&a, &b);
    cout << "Value of a after swapping is " << a << endl;
    cout << "Value of b after swapping is " << b << endl;

    Factorial(&a, &d);
    cout << "Result value of the void Factorial(int *a, int *result) is " << d << endl;

    return 0;
}

//Add two numbers and return the sum
int Add(int *a, int *b)
{
    int sum;
    return sum = *a + *b;
}

//Add two numbers and return the sum through the third pointer argument
void AddVal(int *a, int *b, int *result)
{
    *result = *a + *b;
}

//Swap the value of two integers
void Swap(int *a, int *b)
{
    //XOR Swap algorithm
    *a = *a ^ *b;
    *b = *b ^ *a;
    *a = *a ^ *b;
}
//Generate the factorial of a number and return that through the second pointer argument
void Factorial(int *a, int *result)
{
    int cntr = 1;
    for(;cntr <= *a; cntr++)
    {
        *result *= cntr;
    }
}
