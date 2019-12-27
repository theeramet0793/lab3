#include<iostream>
#include<string>
using namespace std;
int main(){
string text1,text2;
int count,N;
cout<<"Enter the first text: ";
cin>>text1;
cout<<"Enter the second text: ";
cin>>text2;
cout<<"Enter N: ";
cin>>N;
count=0;
while (count<N)
{
    if(count%2==0)
    cout<<text1<<" ";
    else
    cout<<text2<<" ";
    count=count+1;
    
}


    return 0;
}