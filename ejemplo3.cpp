#include <iostream>
using namespace std;
int main(){
    int n, i, A[i];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    
    for (int  i = 1; i < n/2; i++)
    {
      int temp = A[i];
      A[i] = A[n - i + 1];  
      A[n - i + 1] = temp;
    }
    
    for (int i = 1; i < n; i++)
    {
        cout << A[i];
    }
    
    
}