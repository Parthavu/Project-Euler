#include <iostream>

using namespace std;

double SumofMultiples(int upperLimit)
{
    double sum;

    for(int i = 0; i < upperLimit; i++)
    {
        if(i % 3 == 0 or i % 5 == 0)
            sum += i;
    }

    return sum;
}

int main()
{

    cout << SumofMultiples(1000) << endl;

    return 0;
}