#include<iostream> 

using namespace std; 

class PointerMath{
    public:
    void processPointer(int ar[4]){
        int *ar0 = &ar[0];
        int *ar1 = &ar[1];
        int *ar2 = &ar[2];
        int *ar3 = &ar[3];

        cout<<"before processing: "<<endl;
        cout<<"address"<<"        "<<"value"<<endl;
        cout<<ar0<<"  "<<*ar0<<endl;
        cout<<ar1<<"  "<<*ar1<<endl;
        cout<<ar2<<"  "<<*ar2<<endl;
        cout<<ar3<<"  "<<*ar3<<endl;

        // this operation change the element where this pointer is pointing to 
        ar0 += 2;

        cout<<"address after processing: "<<endl;
        cout<<"address"<<"        "<<"value"<<endl;
        cout<<ar0<<"  "<<*ar0<<endl;
        cout<<ar1<<"  "<<*ar1<<endl;
        cout<<ar2<<"  "<<*ar2<<endl;
        cout<<ar3<<"  "<<*ar3<<endl;
    }
};

int main(){
    int arr[4] = {1,2,3,4};

    PointerMath p;
    p.processPointer(arr);
    
}