#include<iostream>
using namespace std;

int main() {
    int key;
    int x[]={1,2,3,4,5,6,7};
    cout<<"the number to search";
     cin>>key;
    int count;
    for(int i = 0;i<7;i++){
        if(x[i]==key){
            cout<<"position of the number is"<<i+1;
        } 
    else{
        continue;
        
    }   
        
    }
    return 0;
        
}