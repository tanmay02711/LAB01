#include<iostream>

//Write 2 versions of a function which to swap 2 integers. The first one have to use int * and the second will use int &.//


void swapPointer(int *a,int *b)
{
	int swapper;
	swapper=*a;
	*a=*b;
	*b=swapper;
	std::cout<<std::endl;
std::cout<<"After swapping by int* Pointer Method\nValue of 1st number is:"<<*a<<"\nValue of 2nd number is:"<<*b;
}
void swapAddress(int& i, int& j)
 {
    int s;
    s= i;
    i = j;
    j = s;
    
    std::cout<<std::endl;
    std::cout<<"After swapping by int& Operater AddressMethod"<<std::endl<<"Value of 1st number is:"<<i <<std::endl<<"Value of 2nd number is:"<<j;
    
}

int main()
{
	int number1,number2;
	int choice;
	std::cout<<"Enter Value Of 1st number:";
	std::cin>>number1;
	std::cout<<"Enter Value of 2nd number:";
	std::cin>>number2;
	
	std::cout<<"Enter your choice among 2 version of swapping"<<std::endl<<"Press 1 to see swapping by pointer:"<<std::endl<<"Press 2 to see swapping by Address of opeator:"<<std::endl;
	
std::cin>>choice;


	std::cout<<"Before swapping"<<std::endl<<"Value of 1st number is:"<<number1<<std::endl<<"Value of 2nd number is:"<<number2;
	
switch(choice)
{
	case 1:
	swapPointer(&number1,&number2);
	break;
	case 2:
	swapAddress(number1,number2);
	break;
	default:
	std::cout<<"Enter valid choice please";
}
std::cout<<std::endl;
std::cout<<"Do you want to run another program "<<std::endl;
std::cout<<"Enter Y to Continue and any key to abort"<<std::endl;
char choiceAgain;
std::cin>>choiceAgain;

if(choiceAgain=='Y'||choiceAgain=='y')
{
	main();
}
else
{
	exit(5);
}
return 0;
}
