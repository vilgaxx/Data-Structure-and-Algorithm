#include<iostream>

using namespace std;

void funB(int r);

void fun(int r) {
    if (r > 0) {
        cout<<r;
        funB(r-1);
    }
}

void funB(int r) {
    if (r > 1) {
        cout<<r;
        fun(r/2);
    }
}

int main() {
    int r = 10;
    fun(r);
    return 0;
}