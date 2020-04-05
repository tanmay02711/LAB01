#include <iostream>

//Swap 2 variables which have been input by keyboard

void swap(int num1,int num2)
{
	int swapper;
	swapper= num1;
    num1= num2;
    num2 = swapper;
    
    std::cout << "\nAfter swapping." << std::endl;
 std:: cout << "First number = " << num1<< ", Second number = " <<num2  << std::endl;
    
}

int main()
{
int number1,number2;
 std::cout<<"Enter the First number"<<std::endl;
std::cin>>number1;

std::cout<<"Enter the Second number"<<std::endl;
std::cin>>number2;   
  
std:: cout << "Before swapping." <<std:: endl;
std::cout << "First Enter number = " << number1 << ", Second Enter number= " << number2 <<std:: endl;

 swap(number1,number2);
 
 return 0;
}