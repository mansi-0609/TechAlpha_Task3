#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int count=0;
    cout<<"enter a  string"<<endl;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            count++;
        }     
    }
    cout<<count;
}