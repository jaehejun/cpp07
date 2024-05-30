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
    
    const Array<int>constArray = arr2;
    for (int i = 0; i < 5; ++i)
    {
        std::cout << constArray[i] << std::endl;
    }


    return 0;
}

//#define MAX_VAL 750
//int main(int, char**)
//{
//    Array<int> numbers(MAX_VAL);
//    int* mirror = new int[MAX_VAL];
//    srand(time(NULL));
//    for (int i = 0; i < MAX_VAL; i++)
//    {
//        const int value = rand();
//        numbers[i] = value;
//        mirror[i] = value;
//    }
//    std::cout << numbers[749] << std::endl;
//    std::cout << mirror[749] << std::endl;
//    //SCOPE
//    {
//        Array<int> tmp = numbers;
//        std::cout << tmp[749] << std::endl;
//        Array<int> test(tmp);
//        std::cout << test[749] << std::endl;
//    }


//    for (int i = 0; i < MAX_VAL; i++)
//    {
//        if (mirror[i] != numbers[i])
//        {
//            std::cerr << "didn't save the same value!!" << std::endl;
//            return 1;
//        }
//    }
//    try
//    {
//        numbers[-2] = 0;
//    }
//    catch(const std::exception& e)
//    {
//        std::cout << "INVALID INDEX" << std::endl;
//        std::cerr << e.what() << '\n';
//    }
//    try
//    {
//        numbers[MAX_VAL] = 0;
//    }
//    catch(const std::exception& e)
//    {
//        std::cout << "[MAX_VAL] is out ouf range!" << std::endl;
//        std::cerr << e.what() << '\n';
//    }

//    for (int i = 0; i < MAX_VAL; i++)
//    {
//        numbers[i] = rand();
//    }
//    delete [] mirror;//
//    return 0;
//}
