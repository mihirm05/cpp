#include<iostream> 
#include<string> 
#include<fstream>

using namespace std; 

int choice(); 
void displayItems(int x); 

int main(){

    // user input stored in selection
    // user input obtained from choice()

    int selection; 
    selection = choice();

    while(selection != 4){
        switch(selection){
            case 1:
            displayItems(1);
            break;

            case 2:
            displayItems(2);
            break; 

            case 3:
            displayItems(3);
            break;
        }
        selection = choice();
    }
}

// take user input 
int choice(){
    int input;

    // offering the menu to the user

    cout<<"\n1-plain items"<<endl;
    cout<<"2-helpful items"<<endl;
    cout<<"3-harmful items"<<endl;
    cout<<"4-exit\n"<<endl;

    cin>>input;
    return input;
}

//displays the items 
void displayItems(int x){

    ifstream f("object.txt");
    string name;
    double power; 

    if(x==1){
        while(f>>name>>power){
            if(power==0){
                cout<<name<<" "<<power<<endl;
            }
        }
    }
    
    if(x==2){
        while(f>>name>>power){
            if(power>0){
                cout<<name<<" "<<power<<endl;
            }
        }
    }
    if(x==3){
        while(f>>name>>power){
            if(power<0){
            cout<<name<<" "<<power<<endl;
            }
        }
    }
}