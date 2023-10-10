#include<iostream>
using namespace std;
bool ispresent(int arr[][4],int target,int n,int m){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
            
        }
    }
    return 0; 
}
int sprilprint(int arr[3][4],int n,int m){
   int row = 3;
   int col = 4;
   int count = 0;
   int total = row*col;

   int startingRow = 0;
   int startingCol = 0;
   int endingRow = row-1;
   int endingCol = col-1;

   while (count<total)
   {
        for (int i = startingCol;count<total && i<=endingCol; i++)
        {
            cout<<arr[startingRow][i]<<endl;
            count++;
        }
        startingRow++;
        for (int i = startingRow; count<total &&i<=endingRow; i++)
        {
            cout<<arr[i][endingCol]<<endl;
            count++;
        }
        endingCol--;

        for (int i = endingCol;count<total && i<=startingCol; i--)
        {
            cout<<arr[endingRow][i]<<endl;
            count++;
        }
        endingRow--;
        for (int i = endingRow;count<total && i<=startingRow; i--)
        {
            cout<<arr[i][startingCol]<<endl;
            count++;
        }
        startingCol++;
   }
}
int waveprint(int arr[][4],int n,int m){
    for (int j = 0; j < m; j++)
    {
        if (j&1)
        {
            for (int i = n; i>=0; i--)
            {
                cout<<arr[i][j]<<" ";
            }
            
        }
        else{
            for (int i = 0; i < n; i++)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        
    }
    
}
int main(){
    int arr[3][4];
    cout<<"Enter the 2d array"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    cout<<"Printing the array"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int target;
    cout<<"Enter the value to be search "<<endl;
    cin>>target;

    if (ispresent(arr,target,3,4))
    {
        cout<<"Element found "<<endl;
    }
    else{
        cout<<"Element not found "<<endl;
    }
    //waveprint(arr,3,4);
    sprilprint(arr,3,4);
    
    return 0;
}