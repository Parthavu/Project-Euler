#include <iostream>
#include <math.h>

using namespace std;

long int sumOfSquares(int n)
{
    return n * (2*n + 1) * (n + 1) / 6;
}

long int squareOfSum(int n)
{
    return pow(n*(n+1)/2, 2);
}

int main()
{
    cout << squareOfSum(100) - sumOfSquares(100) << endl;
    
    return 0;
}
