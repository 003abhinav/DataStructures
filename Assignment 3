                         
// *Ans.1*

// An "In-Place" sorting algorithm uses extra space whose space complexity lies between
// O(1) and O(logn)  whereas "Out of Place" algorithm uses extra space which is more than
// O(logn)

// Examples of "In Place" --> Bubble Sort, Heap Sort,Insertion Sort
// Examples of "Out of Place"--> Merge Sort




//*Ans.2*


#include <iostream>
using namespace std;

//Insertion Sort Using In-Place Algorithm
void InPlace_Insertion(int arr[],int n)
{
    
    int i=0,j=i+1;
    while(j<=n-1)
    {
        int temp=arr[j];
        while(i>=0){
            if(arr[i]>temp){
                arr[i+1]=arr[i];
                i--;
            }
            if(i==-1)
            {
              arr[0]=temp;
              break;
            }
            if(arr[i]<=temp)
            {
              arr[i+1]=temp;
              break;
            }
        }
        j++;
        i=j-1;
    }
    return;
}

//Insertion Sort Using Out-Place Algorithm
void OutPlace_Insertion(int arr[],int s,int e)
{
    //s=starting index
    //e=ending index
    if(s==e)
    {
      return;
    }

    int j=s+1;
    int temp=arr[j];
    while(s>=0)
    {
        if(arr[s]>temp)
        {
            arr[s+1]=arr[s];
            s--;
        }
        if(s==-1)
        {
          arr[0]=temp;
          break;
        }
        if(arr[s]<=temp)
        {
          arr[s+1]=temp;
          break;
        }
    }
    OutPlace_Insertion(arr,s+1,e);
}

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
}

int main()
{
    

    int n=5;
    int arr[]= {10,7,2,4,6};


    cout<<"Before Sorting : ";
    print(arr,n);

    
    InPlace_Insertion(arr,n);   
    cout<<"Sorted Array using In Place :  ";
    print(arr,n);
    
    
    OutPlace_Insertion(arr,0,n-1);
    cout<<"Sorted Array using Out Of Place : ";
    print(arr,n);
    
}


// OUTPUT: 

// Before Sorting : 10 7 2 4 6 

// Sorted Array using In Place :  2 4 6 7 10 

// Sorted Array using Out Of Place : 2 4 6 7 10 




// *ANS.3*
// In-place techniques have lesser space complexity but are difficult to 
// apply in algorithm whereas out-place techniques are easy to apply but 
// increases the space complexity of algorithm.

// For exapmle 
// if we want to reverse an array then its in-place algorithm
// will be swaping the first and last element of array until we reach the 
// middle of array,If we want to solve the same problem using out-place 
// algorithm we have to create one extra array of same size and copy 
// elements of original array from back to the front of new array,this 
// algorith increases the space complexity to O(n) as we have creaed an 
// extra array.

// If we want to swap two variables then it would be easier to do using out of
// plae algo rather than using in place algo. We can easily swap by using a new
// temporary variable which would be out of place algo. If we need to swap using
// In place algo then we would need to apply some maths operation to swap the 
// variables.

// IN-PLACE algorithm are used in Bubble sort, Selection Sort, Insertion Sort, Heapsort.
// NOT IN-PLACE algorithm is used in Merge Sort, Because merge sort requires O(n) extra space.
