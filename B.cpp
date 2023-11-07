#include<bits/stdc++.h>
using namespace std; 
#define end '\n' 
#define ll long long int 

template <typename T> 
T findMax(T a, T b, T c) {
    return max({a, b, c}); 
}
  
int main() { 

    cout<< "Max integer:  " << findMax(10, 50, 20) << endl; 
    cout<<"Max float: " << findMax(3.14, 5.66, 0.55) << endl; 
    cout<<"Max character: " << findMax('a', 'z', 'm') << endl; 
     
    return 0;
}