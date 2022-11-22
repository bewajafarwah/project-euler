#include<iostream>
using namespace std;

int main(int argc, const char* argv[]) {
    long n = 600851475143;
    //long n = 13195;

    int factor = 2;
    int lastFactor = 1;

    while(n > 1) {
        if (n % factor == 0) {
            lastFactor = factor;
            n = n / factor;
            while(n % factor  == 0) {
                n = n / factor;
            }
        }
        factor = factor + 1;
    } 
    cout << lastFactor << endl;

    return 0;
}