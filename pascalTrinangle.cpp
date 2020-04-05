#include <iostream>

void printPascal(int n)
{

	for (int line = 1; line <= n; line++)
	{
		
		int firstValue = 1; 

		for (int i = 1; i < (n - line + 1); i++){
			std::cout << " ";
		}

		for (int i = 1; i <= line; i++)
		{

		
			std::cout << firstValue << " ";
			firstValue = firstValue* (line - i) / i;
		}

		std::cout <<std::endl;
	}
}

int main()
{
	int n;

std::cout << "Give the N the number of rows of the triangle: "<<std::endl;
	
	std::cin >> n;
	std::cout << "Paacal Trinagle of "<<n<<"  line is as follows :"<<std::endl;
	
	
	printPascal(n);

	return 0;
}
