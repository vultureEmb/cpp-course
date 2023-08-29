#include <iostream>

using namespace std;

int main()
{
    //Try to modify x1 & x2 and see the compilation output
    int x = 5;
    int y = 6;
    const int MAX = 12 ;
    int &ref_x1 = x;
    const int &ref_x2 = x;

    //ref_x1 = 5; //no error
    //ref_x2 = 10; //ref_x2 is const ref

    //Try to modify the pointer (e.g. ptr1) and the pointee value (e.g. *ptr1)
    const int *ptr1 = &x; // pointer to constant variable
    int *const ptr2 = &x; // constant pointer to variable
    //const int * const ptr3 = &x; // constant pointer to constant variable
    //ptr1 = &y; value to which pointer is pointing can be changed, its not constant
    //*ptr1 = 124; variable to which pointer is pointing is declared to be constant

    //Find which declarations are valid. If invalid, correct the declaration
    //const int *ptr3 = &MAX; // ptr3 is declared to point on constant variable, and MAX is of that type
    //int *ptr4 = &MAX; //cannot assign address of const variable to the ptr pointing to int variable

    //const int &r1 = ref_x1;
    //int &r2 = ref_x2; //int& to const int does not work

    int *&p_ref1 = ptr1; //?
    const int*&p_ref2 = ptr2 ; //?

    return 0;
}
