#include <iostream>
#include<ctime>

void bubbleSort(int array[],int n)
{
int swap;
std::clock_t count =clock();
for(int i=0;i<n;i++)
{
for(int j=0;j<n-1-i;j++)
 {
 if (array[j]> array[j+1])
 {
 swap=array[j];
 array[j]=array[j+1];
 array[j+1]=swap;
 }
 }
 } 
 double duration = ( std::clock() - count) / (double) CLOCKS_PER_SEC;

    std::cout<<"Time Taken by bubble sort is for sorting: "<< duration <<std::endl;
}
 
void printArray(int arr[], int size) 
{ 

   int i; 
   std::cout<<std::endl;
   std::cout<<"Sorted List by bubble sort:";
    for (i=0; i < size; i++) 

        std::cout<<(arr[i])<<" ";  
} 

int main()
{
	int n;
std::cout<<"enter the numbers of element u want to put in lis"<<std::endl;
std::cin>>n;
int*array{new int [n]};  
std::cout<<"enter the elements:\n";
for (int z = 0; z < n; z++) 
{
std::cin >> array[z];
}

bubbleSort(array,n);

printArray(array,n);

return 0;
}