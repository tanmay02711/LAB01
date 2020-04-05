#include<iostream>
//Question 5 :Transform Matrices into mono array//
int main() 
{
	int row,coloum;
std::cout<<"Enter Rows of Matrix"<<std::endl;
std::cin>>row;
std::cout<<"Enter Coloums of Matrix"<<std::endl;
std::cin>>coloum;

int matrix[row][coloum];
int mono[row*coloum];

std::cout<<"Enter Data in Matrices"<<std::endl;
for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < coloum; j++)
        {
std::cout<<"Enter element of Matrices ["<<i<<"]["<<j<<"]: ";
            std::cin>>matrix[i][j];
          }
       }
std::cout<<std::endl;
std::cout<<"The matrix you have entered is:"<<std::endl;
  for(int i=0; i<row; ++i) 
  {
     for(int j=0; j<coloum;++j)
      
         std::cout<<matrix[i][j]<<" ";
      std::cout<<std::endl;
   
  }
  std::cout<<"The Mono Dimensional Array of the Matrices is:"<<std::endl;
  for(int i=0; i<row; ++i) 
  {  
      for(int j=0; j<coloum;++j)
      {
      	mono[i*row+j]=matrix[i][j];
         std::cout<<mono[i*row+j]<<" ";
      
       }
  }
  return 0;
}