#include<bits/stdc++.h>
using namespace std; 
#define end '\n' 
#define ll long long int 

template<typename  T1, typename T2> 

class Array { 
 private: 
    T1 arr[100];
    T2 brr[100];  
    int n1, n2; 

 public: 
    Array() {
        n1 = 5 , n2 = 5; 
    }  
    
    // insert function for the first arr.
    void  insert(int index, T1 val) {
        if(index < n1) {
            for(int i=n1; i>index; i--) {
                arr[i] = arr[i-1];
            } 

            arr[index] = val; 
            n1++;
        } 

        else {
            cout<<"Invalid index!" << endl; 
        }
    }


    // insert function for the 2nd arr.
    void insert(int index, T2 val) {
        if(index < n2) {
            for(int i=n1; i>index; i--) {
                brr[i] = brr[i-1]; 
 
            }

            brr[index] =  val; 
            n2++;
        } 

        else  {
            cout<<"Invalid index!" << endl;
        }
    }

    void display() {
        cout<< "Fist arrary: "; 
        for(int i=0; i<n1; i++) {
            cout<< arr[i] << ' '; 
        }
        cout<< endl;
        cout<<"Second array: "; 
        for(int i=0; i<n2; i++) {
            cout<< brr[i] << ' ';
        }
        cout<< endl;
    }
  
};
 
 
  
int main() {  

    Array<int, char> array; 
    array.insert(0, 56); 
    array.insert(0, 'A'); 
    array.insert(1, 'F'); 
    
    array.display();
     
    return 0;
}