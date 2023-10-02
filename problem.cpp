//ternary search works log3/2((r-l)/2) and its kinda big difference compared to linear and binary search 
#include<iostream>
#include<vector>
#define EPS 1e-8
using namespace std;
int main(){
    //input data
    int key , size;
    cin >> size;
    vector<int> array(size);

    for ( int i = 0; i < size; i++ ){
        cin >> array[i];
    }

    //algorithm
    
    int left = 0 , right = size-1 , mid_left = 0, mid_right = 0;
    
    while (right - left > EPS) {

        mid_left = left + ( right - left ) / 3;
        mid_right = right - ( right - left ) / 3;

        if ( key < array[mid_left] ){
            right = mid - 1;
        }

        else if ( key > a[mid_right] ){
            left = mid_right + 1;
        }
    }
    cout<<left
}
