#include<iostream>
using namespace std;


bool checkPali(int val, int rval) {
    if(val == rval) {
        return true;
    }
    return false;
}

int getReverse(int val) {
    int revV = 0;
    while(val > 0) {
        revV = (revV * 10) + (val % 10);
        val = val / 10;
    }
    return revV;
}

int main(int argc, char* argv[]) {

    int value, revV;
    int a = 999;
    int b = 999;
    int largestPali = 0;

    for(int i = a;i > 0; i--) {
        for(int j = b; j > 0; j--) {
            value = i * j;
            revV = getReverse(value);
            if(checkPali(value, revV) && (largestPali < value)) {
                largestPali = i * j;
            }
        }
    }

    cout << largestPali << endl;
    return 0;
}