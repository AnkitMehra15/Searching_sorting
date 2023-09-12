#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> V={3,7,11,19,20,65};
    if(binary_search(V.begin(),V.end(),19)){
        cout<<"Element is found "<<endl;
    }
    else{
        cout<<"Element is not found "<<endl;
    }
    if(binary_search(V.begin(),V.end(),4)){
        cout<<"Element is found ";
    }
    else{
        cout<<"Element is not found ";
    }
    
}