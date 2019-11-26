#include <iostream>
#include <string>

using namespace std;

class Swapper {
	public :
		int number1ToSwap;
		int number2ToSwap;
	    string failureMessage;

	public:
		void swapNumbers(int number1ToSwap,int number2ToSwap);
};

void Swapper::swapNumbers(int number1ToSwap, int number2ToSwap) {
	std::cout << number1ToSwap << " and " << number2ToSwap << " are swapped";
}

int main() {

std::cout << "Welcome to the Swapper program";
Swapper swapper;
swapper.swapNumbers(5, 6);

return 0;
}