#include<iostream>

using namespace std;
 // namespace std

void ar(int A[], int n) {
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
}

int main(){
    int A[5] = {2,4,6,7,8};
    ar(A,5);
    for (int i = 0; i < 5; i++)
    {
        cout<<A[i]<<endl;
    }    
    return 0;
}