#include <iostream>

//Test if 2 numbers inupt from keyboard are even or odd//

int find_Oddeven(int num)
{
if(num%2==0)
  std::cout<<num<<"-is an even";
else
    std::cout<<num<<"- is an odd";
    return 0;
}
int main()
{
    int num;
    std::cout << "Enter a number to ceck odd or even" << std::endl;
    
  std:: cin>>num;
    find_Oddeven(num);
    
    return 0;
}


