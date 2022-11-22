#include <iostream>
using namespace std;

int multiples_of(int mult, int n) {
    return mult * ((n * (n + 1)) / 2);
}


int main() {
    int limit = 999; // below 1000.
    
    int mult_3 =  multiples_of(3, (limit/3));

    int mult_5 = multiples_of(5, (limit/5));

    int mult_15 = multiples_of(15, (limit/15));

    cout << mult_3 + mult_5 - mult_15 << endl;

    return 0;
}