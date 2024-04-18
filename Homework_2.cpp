#include <iostream>

int main() {

	const int anulCurent = 2024;
	int anulNasterii; 
	std::cout << "CALCULATOR AL VARSTEI" << std::endl;
	std::cout << "Introduce-ti va rog anul nasterii: ";
	std::cin >> anulNasterii; 
	int varsta = anulCurent - anulNasterii; 
	std::cout << "Varsta dvs. este " << varsta << " ani." << std::endl;

	return 0;
}