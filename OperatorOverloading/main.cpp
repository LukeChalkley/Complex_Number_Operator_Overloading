#include <iostream>
#include "complex.h"

int main(){
	
	complex<int> c(1,2);
	complex<int> d(3,4);
	std::cout << c << std::endl 
			  << c+d << std::endl
		      << c - d << std::endl
			  << c * d << std::endl
		      << c / d << std::endl
	  		  << -c << std::endl;
	c += d -= d /= d *= d;
	std::cout << c << std::endl;
	std::cin.get();
}
