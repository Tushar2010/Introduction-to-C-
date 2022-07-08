#include<iostream>
using namespace std;

  void printTable(int start, int end, int step);

int main(){
    int start, end, step;
    cin >> start >> end >> step;
  
    printTable(start, end, step);

}

void printTable(int start, int end, int step) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */int cel;
    for(int i=start; i<=end;i=i+step)
    {
       cel=(i-32)*(5.0/9);
        cout<<i<<"\t"<<cel<<endl;
    }
        
}



