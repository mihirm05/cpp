#include<iostream> 
#include<string> 
#include<cstdlib> 

using namespace std;

class Calculator{
    public:
    void calc(int arr[], int size){
        int sum = 0;

        for(int i=0; i<size; i++){
            // cout<<sum<<endl;
            sum += arr[i];
        }

        cout<<"sum of array elements is: "<<sum<<endl;
    }
};

int main(){
    int arr[5];
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size; i++){
        cout<<"Enter the element "<<i<<endl;
        cin>>arr[i];
    }


    Calculator c;
    c.calc(arr, size);

    // size of array divided by the size of each element yields number of array elements
    // cout<<sizeof(arr)/sizeof(arr[0])<<endl;
    

}