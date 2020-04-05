#include<iostream>

//Test if 2 numbers inupt from keyboard have the same sign//

int sameSign(int num1, int num2)
    {
        if (num1 > 0 && num2 < 0||num1 < 0 && num2 > 0)
         std::cout<<" differnt sign";
         else
         std::cout<<"same sign";
    
    return 0;
    }
int main()
{
int number1;
int number2;

std::cout<<"Enter the First number"<<std::endl;
std::cin>>number1;

std::cout<<"Enter the Second number"<<std::endl;
std::cin>>number2;

sameSign(number1,number2);

return 0;
}
