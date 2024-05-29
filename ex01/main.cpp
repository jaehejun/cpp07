#include "iter.hpp"

int main()
{
	char charArray[] = {'a', 'b', 'c', '?'};
	int intArray[] = {0, 1, 2, 3, 4};
	std::string stringArray[] = {"aaa", "bbb", "ccc"};

	::iter(charArray, getSize(charArray), printElement);
	::iter(intArray, getSize(intArray), printElement);
	::iter(stringArray, getSize(stringArray), printElement);

	::iter(charArray, getSize(charArray), addOne);
	::iter(intArray, getSize(intArray), addOne);
	::iter(stringArray, getSize(stringArray), addOne);

	std::cout << "@@@@@@@@@@@AFTER ADDONE FUNCTION@@@@@@@@@@@@" << std::endl;

	::iter(charArray, getSize(charArray), printElement);
	::iter(intArray, getSize(intArray), printElement);
	::iter(stringArray, getSize(stringArray), printElement);

	return 0;
}