#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(int num)
{
    int reversed = 0;
    int temp = num;
    while(temp > 0){
        int lastDigit = temp%10;
        reversed = reversed * 10 + lastDigit;
        temp /= 10;
    }
    if(reversed == num)
        return true;
    
    return false;
}

int main()
{
    cout << isPalindrome(387) << endl;

    return 0;
}
