#include<iostream>
using namespace std;
bool LinearSearch(int arr[], int size, int key)
{
    for(int i=0;i<=size;i++)
    {
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[10]={2,5,-9,21,15,-15,9,8,88,22};
    cout<<"Enter the key which is to be searched "<<endl;
    int key;
    cin>>key;

    bool found=LinearSearch(arr,10,key);

    if(found){
        cout<<"Key is present "<<endl;
    }
    else{
        cout<<"Key is absent "<<endl;
    }
    return 0;
}