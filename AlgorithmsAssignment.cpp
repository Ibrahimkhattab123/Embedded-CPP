#include "IntegerArray.h"

// 1)
// * Given a sorted Array in ascending order need to square every element in this array
// * and maintain the sorting in the same order.
// * {1,5,6,7,8,9}
// * {1,25,36,49,64,81}
// * Space complexity should be O(1)

// 2)
// * Given an array has Integer values and include multiple values of the same element 
// * need to move the a given integer value to the end of the array.
// * example 1,2,3,2,10,9,2,27,30,17,8,9    (repeated values: 2, 9 )
// * answer  1 3 10 9 27 30 17 8 9 2 2 2 
// * Time complexity should be O ( n ) << don't worry if u dont know what is it

int main()
{
    
     // 1)

    integer_array<int, bool> FirstArray(1);
    FirstArray.Square_Element();
    FirstArray.Print_Elements();

    // 2)

    integer_array<int, bool> SecondArray(0);
    SecondArray.Pushback_Given_Element(2);
    SecondArray.Print_Elements();
    
    return 0;
}