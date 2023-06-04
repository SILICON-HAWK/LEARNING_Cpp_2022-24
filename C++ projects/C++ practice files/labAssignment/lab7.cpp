#include<iostream>
using namespace std; 

template <typename T>
class vector
{
    public:

    void find(int size, int arr[]){
        int smallest = arr[0];

        for (int i=1; i < size; i++){
            if (arr[i] < smallest){
                smallest = arr[i];
            }
        }
        cout<<"The smallest element in the array is: "<<smallest << endl<< endl;
    }

    void search(int size, int arr[], int val){
        for (int i = 0; i < size; i++){
            if (arr[i] == val){
                cout<<"The given element (" << val <<") is found at "<< i <<" index"<<endl<< endl;
            }
        }
    }

    void average(int size, int arr[]){
        int total = 0;
        int average = 0;

        for (int i = 0; i < size; i++){
            total += arr[i];
        }
        average = total/size;
        cout<<"The average of the given array is: "<< average<<endl;
    }
};

int main(){

    vector<int> obj;
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int arr[size];
    int val;
    int num;


    for (int i = 0; i < size; i++ ){
        cout<<"Enter number: ";
        cin>>val;
        arr[i] = val;
    }
    cout<<endl;

    cout<<"Enter the value to find its index: ";
    cin>>num;
    
    obj.find(size, arr);
    obj.search(size, arr, num);
    obj.average(size, arr);
    return 0;
}