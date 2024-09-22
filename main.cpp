#include "src/calculator.h"

int main() {
    
	float maxFloat = std::numeric_limits<float>::max();
	
	calculator(0, '+', 0);
	calculator(0, '-', 0);
	calculator(0, '*', 0);
	calculator(0, '/', 0);

	calculator(-1, '+' , -1);
	calculator(-1, '-' , -1);
	calculator(-1, '*' , -1);
	calculator(-1, '/' , -1);

	calculator(maxFloat, '+', maxFloat);
	calculator(maxFloat, '-', maxFloat);
	calculator(maxFloat, '*', maxFloat);
	calculator(maxFloat, '/', maxFloat);

	calculator(maxFloat+1, '+', maxFloat+1);
	calculator(maxFloat+1, '-', maxFloat+1);
	calculator(maxFloat+1, '*', maxFloat+1);
	calculator(maxFloat+1, '/', maxFloat+1);

	return 0;
}
