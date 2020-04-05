#include<iostream>

//Print in the terminal 3 times the word "First" or 2 times the word "second" depending of the user//
int first()
{
	for(int i =0;i<3;i++)
	
	std::cout<<"First\n";
	return 0;
}

int second()
{
	for(int i =0;i<2;i++)
	
	std::cout<<"Second\n";
	return 0;
}
int main()
{
int choice;
char mychoice;
std::cout<<"Enter your choice to print as following:\n Press 1 to Print First 3 times\n Press 2 to Print second 2 times"<<std::endl;
std::cin>>choice;

switch(choice)
{
case 1:

	first();
	break;

case 2:
   second();
     break;
     
  default:
  std::cout<<"Enter valid choice";
  break;
}
std::cout<<"Do u want continue"<<std::endl;
std::cout<<"Press Y to yes and any key to Stop"<<std::endl;

std::cin>>mychoice;

if(mychoice=='Y' || mychoice=='y')
{
	
	main();
}
else
{
	exit(5);
}

  return 0;
}
