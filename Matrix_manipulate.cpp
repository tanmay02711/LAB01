#include<iostream>
//Question 5 :Transpose Matrices//
int main() 
{
	int row,coloum;
std::cout<<"Enter Rows of Matrix"<<std::endl;
std::cin>>row;
std::cout<<"Enter Coloums of Matrix"<<std::endl;
std::cin>>coloum;

int matrix[row][coloum];
int transpose[coloum][row];

std::cout<<"Enter Data in array"<<std::endl;
for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < coloum; j++)
        {
            std::cout<<"Enter element of Matrices ["<<i<<"]["<<j<<"]: ";
            std::cin>>matrix[i][j];
          }
       }

std::cout<<"The matrix is:"<<std::endl;
   for(int i=0; i<row; ++i) {  
      for(int j=0; j<coloum;++j)
         std::cout<<matrix[i][j]<<" ";
      std::cout<<std::endl;
   }
   std::cout<<std::endl;
   for(int i=0; i<row; ++i)
      for(int j=0; j<coloum; ++j) {
         transpose[j][i] = matrix[i][j];
      }
   std::cout<<"The transpose of the matrix is:"<<std::endl;
   for(int i=0; i<row; ++i) {  
      for(int j=0; j<coloum; ++j)
         std::cout<<transpose[i][j]<<" ";
         std::cout<<std::endl;
      
   }
   return 0;
   }
