#include "iter.hpp"

int main()
{
	char charArray[] = {'a', 'b', 'c', '?'};
	int intArray[] = {0, 1, 2, 3, 4};
	std::string stringArray[] = {"aaa", "bbb", "ccc"};

	::iter(charArray, getSize(charArray), printElement<char>);
	::iter(intArray, getSize(intArray), printElement<int>);
	::iter(stringArray, getSize(stringArray), printElement<std::string>);

	::iter(charArray, getSize(charArray), addOne<char>);
	::iter(intArray, getSize(intArray), addOne<int>);
	::iter(stringArray, getSize(stringArray), addOne<std::string>);

	std::cout << "@@@@@@@@@@@AFTER ADDONE FUNCTION@@@@@@@@@@@@" << std::endl;

	::iter(charArray, getSize(charArray), printElement<char>);
	::iter(intArray, getSize(intArray), printElement<int>);
	::iter(stringArray, getSize(stringArray), printElement<std::string>);

	return 0;
}

//class Awesome
//{
//  public:
//    Awesome( void ) : _n( 42 ) { return; }
//    int get( void ) const { return this->_n; }
//  private:
//    int _n;
//};

//std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
//{
//  o << rhs.get();
//  return o;
//}

//template< typename T >
//void print( T& x )
//{
//  std::cout << x << std::endl;
//  return;
//}

//int main() {
//  int tab[] = { 0, 1, 2, 3, 4 };
//  Awesome tab2[5];

//  iter( tab, 5, print<const int> );
//  iter( tab2, 5, print<Awesome> );

//  return 0;
//}