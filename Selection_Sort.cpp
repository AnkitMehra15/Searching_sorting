#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void SelectionSort(vector<int> &arr, int n){
    for(int i=0;i<n-1;i++)
    {
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
    }
}

void display(vector<int> &arr){
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
}
int main(){
    int n,num;
    cout<<"Enter the number of elemenets you want to sort "<<endl;
    cin>>n;

    vector<int> V;

    cout<<"Input the numbers "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        V.push_back(num);
    }
    cout<<"Our elements is "<<endl;

    display(V);

    SelectionSort(V,n);
    cout<<"your sorted array is "<<endl;

    display(V);
    cout<<endl;
}