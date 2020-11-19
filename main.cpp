#include <iostream>
#include <cmath>

bool isPrime(int a);
int polynomialEvaluation(int n);
int main() {
    int i=0;
    bool foundFailure = false;
    while (!foundFailure){
        int a  = polynomialEvaluation(i);
        if (!isPrime(polynomialEvaluation(i))){
            std::cout << "The first value of n where P(n) is not prime is " << i;
            foundFailure = true;
        }
        i++;
    }
    return 0;
}
int polynomialEvaluation(int n){
    return pow(n,2)+n +41;
}
bool isPrime(int a){
    if (a==1) return false;
    if (a==2) return true;
    for (int i=2; i<= sqrt(a); i++){
        if (a%i ==0) return false;
    }
    return true;
}