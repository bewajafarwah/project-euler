#include<iostream>
using namespace std;

int main() {
    int sum = 0;
    int limit = 4000000;
    int a = 1;
    int b = 1;
    int cur = a + b;
    int temp;

    while(cur < limit) {
        cur = a + b;

        temp = b;
        b = cur;
        a = temp;
        
        if (cur % 2 == 0) {
            sum += cur;
        }  
    }

    cout << sum << endl;    


    return 0;
}