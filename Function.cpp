#include<iostream>
#include<cmath>

//Display in the terminal the following function :f(x) = sin(x) + ln(x)//
void func()
 {
 	double func;
 	for(int i=1 ;i <=10;i++)
 	{
 	func=sin(i)+log(i);
 	std::cout<<"x range from[1 10] :"<< func<<std::endl;
 	}
  }

int main()
{

std::cout<<"f(x)= sin(x)+ln(x)"<<std::endl;
func();
}