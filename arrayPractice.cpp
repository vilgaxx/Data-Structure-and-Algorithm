#include<iostream>

using namespace std;

int main () {
    // int A[10]= {2,4,5,6,7,10};

    // cout<<sizeof(A)/sizeof(A[1])<<endl;
    // for (int i = 0; i < sizeof(A)/sizeof(A[0]); i++)
    // {
    //     cout<<A[i]<<endl;
    // }
    int n;
    cout<<"Enter size of an Array :"<<endl;
    cin>>n;
    int A[n];
    cout<<"Feed integer in your Array :"<<endl;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        A[i]= x;
    }
    
    for (int y: A)
    {
        cout<<y;
    }
    

    // cout<<sizeof(A)<<endl;
    // cout<<A[1]<<endl;
    // printf("%d\n",A[9]);

    return 0;
}