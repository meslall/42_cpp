#include "Fixed.hpp"

int main( void ) {

    Fixed g(42.45f);
    Fixed h(42.42f);
    Fixed m;


    std::cout << "h " << h <<std::endl;
    std::cout << "g " << g <<std::endl;
    bool n = h > g;
    std::cout << std::boolalpha << "> " <<  n<<std::endl;
    n = h < g;
    std::cout << std::boolalpha << "< " <<  n<<std::endl;
    n = h >= g;
    std::cout << std::boolalpha << ">= " << n <<std::endl;
    n = h <= g;
    std::cout << std::boolalpha << "<= " << n <<std::endl;
    n = h == g;
    std::cout << std::boolalpha << "== " << n <<std::endl;
    n = h != g;
    std::cout << std::boolalpha << "!= " << n <<std::endl;
    std::cout << " + " << g + h << std::endl;
    
std::cout << "============================"<<std::endl;

Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout <<b << std::endl;
std::cout << h / b<< std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
std::cout << Fixed::min( a, b ) << std::endl;
return 0;
}