//function overloading
#include<iostream>
using namespace std;
class Addition
{
    public: 
    int sum(int a, int b)
    {
        return a+b;
    }
    int sum(int a, int b, int c)
    {
        return a+b+c;
    }
};

int main()
{
    Addition obj;
    cout<<obj.sum(20,15)<<endl;
    cout<<obj.sum(30,40,50)<<endl;
    return 0;
}

/*
OUTPUT: 
35
120
*/
