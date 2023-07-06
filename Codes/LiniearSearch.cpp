#include<iostream>
using namespace std;

int LiniurSearch(int arr[], int size, int key) 
{
    //searching the element
    for(int i = 0; i<size; i++) 
    {
        if( arr[i] == key) 
        return i;

    }

    //element is not found
    return -1;
}


int main() 
{
    //create variable to alloacte the size of array dynamicly
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];

     //array has no size
    if(n==0)
        cout << "Enter Vaild Size";
        exit(0);

    //Input the elements of array
    for(int i=0;i<n;i++)
    {
        cout << "Enter the arr[" << i << "]: ";
        cin >> arr[i]; 
    }

    //Input the element to search
    cout <<"Enter the element to search for: "; 
    int key;
    cin >> key;

    //call LiniurSearch funcion to search the element in array
    int found = LiniurSearch(arr, n, key);

    if(found) 
        cout << "Element " << key << " is found at index " << found << endl;
    else
        cout <<"Key is absent " << endl;

    return 0;
}
