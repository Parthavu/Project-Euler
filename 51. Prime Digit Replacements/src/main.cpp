#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(long int n)
{
    for(long int i = 2; i < n; i++){
        if(n%i==0)
            return false;
    return true;
    }
}

void vectorize(vector<int>& num_vec, long int num)
{

    string num_str = to_string(num);

    for(char digit : num_str)
        num_vec.push_back(int(digit) - 48);

}

long int devectorize(vector<int>& num_vec)
{
    long int number = 0;

    for(int i = 0; i < int(num_vec.size()); i++){
        number += num_vec[i] * pow(10, num_vec.size() - i);
    }

    return number;
}

int main()
{

    vector<int> number;
    vectorize(number, 3);

    cout << isPrime(devectorize(number)) << endl;

    return 0;
}
