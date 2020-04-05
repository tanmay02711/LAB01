#include<iostream>
#include<ctime>



int partition(int a[],int start,int end)
{
    int pivot=a[end];
    
    
    int index=start;
    int i,t; 
    
    for(i=start;i<end;i++)
    {
    	if(a[i]<=pivot)
        {
            t=a[i];
            a[i]=a[index];
            a[index]=t;
            index++;
        }
     }

      t=a[end];
      a[end]=a[index];
      a[index]=t;
    
     return index;
 }
 
 void Quicksort(int a[],int start,int end)
 {
 	
	if(start<end)
	{
	     int index=partition(a,start,end);
             Quicksort(a,start,index-1);
             Quicksort(a,index+1,end);
       }
	}
	
	void printQuick(int array[],int start,int size)
	{
		std::cout<<std::endl;
		std::cout<<"After Quick Sort the array is:\n";
      for(int i=start;i<=size;i++)
      {
    	 std::cout<<array[i]<<" ";
      }
	}
int main()
{
	int n;
  std::cout<<"Enter number of elements: ";
  std::cin>>n;
        int a[n];
  std::cout<<"Enter the array elements:"<<std::endl;
        for(int i=0;i<n;i++)
       {
    	 std::cin>>a[i];
       }
       std::clock_t count =clock();
      Quicksort(a,0,n-1);
    
 double duration = ( std::clock() - count) / (double) CLOCKS_PER_SEC;

   std::cout<<"Time Taken by quick sort "<< duration <<std::endl;
   
  printQuick(a,0,n-1);
      
	return 0;
}