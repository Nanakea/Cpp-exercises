#include <iostream>

using namespace std;

int main()
{
    bool isMale = false;
    bool isTall = false;

    if(isMale && isTall)
    {
        cout << "You are a tall dude";
    }    
    else if(isMale && !isTall)    
    {
        cout << "You are a short dude";
    }   
    else if(!isMale && isTall)
    {
        cout << "You are a tall female";
    }
    else if(!isMale && !isTall)
    {
        cout << "You are a short female";
    }

    return 0;
}