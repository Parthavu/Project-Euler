#include <iostream>

using namespace std;

long int largestPrimeFactor(int long input)
{
    int num = 0;

    vector<int> primes;

    for(int i = 2; i < input; i++){
        bool isPrime = true;
        for(int j = 2; j < i; j++){
            if(i % j == 0 and i != j)
                isPrime = false;
        }
        if(isPrime)
            primes.push_back(i);
    }

    for(int prime : primes){
        if(input % prime == 0)
            num = prime;
    }

    return num;
}

int largestPrimeFactor2(long int input)
{
    for(long int i = input; i > 1; i--){
        bool isPrime = true;
        for(int j = 2; j < i; j++){
            if(i % j == 0 and i != j)
                isPrime = false;
        }
        if(isPrime){
            if(input % i == 0)
                return i;
        }
    }
    return 0;
}

int main()
{
    cout << largestPrimeFactor2(600851) << endl;

    return 0;
}
