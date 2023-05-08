#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(double num)
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

double largestPalindrome()
{
    vector<int> palindromes;
    for(int i = 999; i > 99; i --){
        for(int j = 999; j > 99; j--){
            if(isPalindrome(i*j)){
                palindromes.push_back(i*j);
            }
        }
    }

    return *max_element(palindromes.begin(), palindromes.end());
}

int main()
{
    cout << largestPalindrome() << endl;

    return 0;
}
