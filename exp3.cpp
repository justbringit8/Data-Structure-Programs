/* Factorial of a number using Recursion */
#include<iostream>
using namespace std;
int fact(int);
int main()
{
    int num,f;
    cout<<"Program by Prasad Kadam \n  Enter the number: ";
    cin>>num;

    f=fact(num);
    cout<<"\n  The factorial of " <<num<<" is "<<f;
}

int fact(int n)
{
    if(n==0||n==1)
        return 1;
    else
        return(n * fact(n-1));
}
