#include<iostream>
using namespace std;
int main(void)
{
	int *arr;
	arr=new int[10];
       for(int i=0;i<5;i++)
       {
         cout<<"enter the number :"<<endl;
	 cin>>arr[i];
       }
       for(int j=0;j<5;j++)
       {
	       cout<<"values:"<<arr[j]<<endl;
       }

       return 0;
}
    	 
