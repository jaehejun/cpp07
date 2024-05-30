#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename F>
void iter(T *arrAddress, size_t arrLength, F function)
{
    for (size_t i = 0; i < arrLength; i++)
    {
        function(arrAddress[i]);
    }
}

//template <typename T>
//void iter(T *arrAddress, size_t arrLength, void (*function)(T&))
//{
//	for (size_t i = 0; i < arrLength; i++)
//	{
//		function(arrAddress[i]);
//	}
//}

//template <typename T>
//void iter(T *arrAddress, size_t arrLength, void (*function)(const T&))
//{
//	for (size_t i = 0; i < arrLength; i++)
//	{
//		function(arrAddress[i]);
//	}
//}

template <typename T>
void printElement(T &element)
{
	std::cout << element << std::endl;
}

//일반 함수 템플릿
template <typename T>
void addOne(T &element)
{
	element += 1;
}
//템플릿 특수화
template <>
void addOne<std::string>(std::string &element)
{
	for (size_t i = 0; i < element.length(); i++)
	{
		element[i] += 1;
	}
}

template <typename T, size_t arraySize>
size_t getSize(T (&array)[arraySize])
{
	(void)array;
	return arraySize;
}

#endif