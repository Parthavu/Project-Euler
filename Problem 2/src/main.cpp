#include <iostream>

using namespace std;

long int sumofEvenFibonacci(int upperLimit)
{
    long int sum = 0;
    
    long int num1 = 0;
    long int num2 = 1;

    while(num2 < upperLimit){
        long int temp = num2;
        num2 += num1;
        num1 = temp;

        if(num2 % 2 == 0)
            sum += num2;
    }

    return sum;
}

int main()
{
    cout << sumofEvenFibonacci(4000000) << endl;

    return 0;
}