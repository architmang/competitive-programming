#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int arr[] = {1,3,2};
    
    do
    {
        cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    } while (next_permutation(arr, arr + 3));
    
    return 0;
}