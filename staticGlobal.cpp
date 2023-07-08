#include<iostream>

using namespace std;

int fun(int n) {
static int x = 0;
    if (n>0) {
        x++;
        fun(n-1)+x;
        cout<<x<<endl;
    }
}

int main() {
    int r = 5;
    // cout<<fun(r);
    
    cout<<fun(r);
}