// Bubble Sort
// To sort given elements in Ascending order
#include<iostream>
using namespace std;
int main()
{
      int array[50], n, i, j, k, temp;
      cout<<"Program by Prasad Kadam\n\n\nEnter the size of array: ";
      cin>>n;
     cout<<"Enter the array elements to be sorted: ";
    //To read the array
	for(i=0;i<n;++i)
		cin>>array[i];
   cout<<"Array before sorting :";
	for(i=0;i<n;++i)
		cout<<" "<<array[i];
for(i=1;i<n;++i)   // i keeps track of the no. of passes
{
       {
          for(j=0;j<(n-i);++j)
	     if(array[j]>array[j+1])
	        {
		temp=array[j];
         	array[j]=array[j+1];
		array[j+1]=temp;
	         }
          }
    //To print the array elements after every pass
       cout<<"\n\n Array after Pass "<<i<<":" ;
        for(k=0;k<n;++k)
	     cout<<" "<<array[k];
 }
	cout<<"\n\nArray after bubble sort:";
	for(i=0;i<n;++i)
	     cout<<" "<<array[i];
	return 0;
}
