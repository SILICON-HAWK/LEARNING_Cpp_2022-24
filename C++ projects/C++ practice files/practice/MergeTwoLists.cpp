#include<iostream>
using namespace std;

class MergeTwoList
{
    
    public:
    int Userlist1[50], UserList2[50], mergedList[100];
    int sizeOne, sizeTwo, i, k;

    void MergeListMethod(){

        cout<<"Enter the Size for First Array: ";
        cin>>sizeOne;
        cout<<"Enter "<<sizeOne<<" Elements for First Array: ";
        for(i=0; i<sizeOne; i++)
        {
            cin>>Userlist1[i];
            mergedList[i] = Userlist1[i];
        }
        k = i;
        cout<<"\nEnter the Size for Second Array: ";
        cin>>sizeTwo;
        cout<<"Enter "<<sizeTwo<<" Elements for Second Array: ";
        for(i=0; i<sizeTwo; i++)
        {
            cin>>UserList2[i];
            mergedList[k] = UserList2[i];
            k++;
        }
        cout<<"\n The New Array (Merged Array):  \n";
        for(i=0; i<k; i++)
            cout<<mergedList[i]<<" ";
        cout<<endl;
    }
};

int main()
{
    MergeTwoList mer;
    mer.MergeListMethod();
    return 0;
}