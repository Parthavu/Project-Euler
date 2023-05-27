#include <iostream>

using namespace std;

bool isPrime(int num)
{
    for(int i = 2; i < num; i++){
        if(num % i == 0)
            return false;
    }

    return true;
}

long int NthPrime(int n)
{
    int count = 0;
    long int prime = 0;

    for(long int i = 2; i < 100000000; i++){
        if(isPrime(i)){
            prime = i;
            count ++;
        }
        if(count == n){
            return prime;
        }
    }

    return 0;
}

int main()
{
    
    cout << NthPrime(10001) << endl;

    return 0;
}
