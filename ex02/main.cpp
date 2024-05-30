#include "Array.hpp"

int main()
{
    Array<int> arr1;
    std::cout << "arr1 size: " << arr1.size() << std::endl;

    Array<int> arr2(5);
    arr2[0] = 22;
    std::cout << "arr2 size: " << arr2.size() << std::endl;
    arr2.printArray();

    Array<int> arr3(arr2);
    std::cout << "arr3 size: " << arr3.size() << std::endl;
    std::cout << "@@@@@@@@@ARR3 CONS WITH COPY@@@@@@@@" << std::endl;
    arr3.printArray();

    Array<int> arr4;
    arr4 = arr2;
    std::cout << "arr4 size: " << arr4.size() << std::endl;
    std::cout << "@@@@@@@@@ARR4 WITH ASSIGN OPERATOR@@@@@@@@" << std::endl;
    arr4.printArray();

    try
    {
        std::cout << "arr4[1] :" << arr4[1] << std::endl;
        std::cout << "arr4[10] :" << arr4[10] << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    arr3[0] = 333;
    std::cout << "@@@@@@@@@ARR2 && ARR3 AFTER MODIFYING ARR3@@@@@@@@" << std::endl;
    arr2.printArray();
    arr3.printArray();

    arr4[0] = 4444;
    std::cout << "@@@@@@@@@ARR2 && ARR4 AFTER MODIFYING ARR4@@@@@@@@" << std::endl;
    arr2.printArray();
    arr4.printArray();

    arr2[0] = 200;
    std::cout << "@@@@@@@ARR2, ARR3, ARR4 AFTER MODIFIYING ARR2@@@@@@@" << std::endl;
    arr2.printArray();
    arr3.printArray();
    arr4.printArray();


    try
    {
        std::cout << "Trying to access an element with wrong index" << std::endl;
        arr4[10] = 42;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
    return 0;
}
