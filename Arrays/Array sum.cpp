#include<iostream>
using namespace std;

int main(){
    /* Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n,a[1000],i,sum=0;
    cin>>n;
    for(i=0;i<n;i++ )
    {
        cin>>a[i];
        sum=sum+a[i];
    }

    cout<<sum;
    return 0;
}


