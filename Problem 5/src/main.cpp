#include <iostream>

using namespace std;

bool testCondition(int num)
{
    //cout << "Checking " << num << endl;
    for(int i = 1; i <= 20; i++){
        if(num % i == 0)
            continue;
        else
            return false;
    }

    return true;
}

int main()
{

    for(long int i = 20; i < 1000000000; i++){
        if(testCondition(i)){
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}
