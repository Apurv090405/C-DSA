#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) 
{

    int start = 0;
    int end = size-1;
    int mid = (start + end)/2;

    while(start <= end) {

        if(arr[mid] == key) 
        {
            return mid;
        }
        //Right Part of array
        if(key > arr[mid]) 
        {
            start = mid + 1;
        }
        //left Part of array
        else
        {
            end = mid - 1;
        }
        mid = (start + end)/2;
    }
    
    return -1;
}

void Sort(int size,int arr[])
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i]; 
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() 
{ 
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    //array has no size
    if(n==0){
        cout << "Enter Vaild Size";
        exit(0);
    }

    //Input the elements of array
    for(int i=0;i<n;i++)
    {
        cout << "Enter the arr[" << i << "]: ";
        cin >> arr[i]; 
    }

    cout <<"Enter the element to search for: "; 
    int key;
    cin >> key;

    //Sorting Array
    Sort(n,arr);

    //Apply Binary Search in Sorted Array
    int Index = binarySearch(arr, n, key);

    //Sorting Array Print
    cout << "Array elements in sorting form:" << endl;
    for(int i=0;i<n;i++)
    {
        cout << "Enter the arr[" << i << "]: " << arr[i] << endl;
    }

    //Print the result of Binary searching
    if(Index)
        cout << "Element \"" << key << "\" is found at index " << Index << endl;
    else 
        cout << "Element not found!!";
    
    return 0;
}
