#include <iostream>
using namespace std;

void print(int arr[]){
    cout << "sizeof(arr) = "<< (int)sizeof(arr)<< endl; //will get size of a pointer which is 8
    cout << "sizeof pointer = "<< (int)sizeof(*arr)<< endl;
    cout << "*(arr+2) = "<< *(arr+2)<< endl;
    int x=10;
    arr = &x;
    cout << "After Changing: *arr: "<<*arr<<endl;
    cout << "Trying to access now third element:" << *(arr+2) << endl; //Cant access
}

void print1(int *A){
    cout << "sizeof(A) = "<< (int)sizeof(A)<< endl; //will get size of a pointer which is 8
    cout << "sizeof pointer = "<< (int)sizeof(*A)<< endl;
    cout << "*(A+2) = "<< *(A+2)<< endl;
    int x=10;
    A = &x;
    cout << "After Changing: *A: "<<*A<<endl;
    cout << "Trying to access now third element:" << *(A+2) << endl; //Cant access
}

int main(){
    //Arrays
    //Declaration
    int a1[5];
    //Initialization
    int a2[]={10,20,50,30}; //creates an array of size 4
    int a3[4]={10,20,50,30}; //both a2 and a3 are similar declarations
    int a4[6]={1,2,8,10}; //array of size 6 is created and the array will be {1,2,8,10,0,0} --> Remaining elements are declared as zero
    // or int* a, int *a, int * a, int*a
    int *A;
    A = new int[10];
    for(int i=0;i<10; i++) A[i]=i;
    //*Name of the array is pointer to the array*
    // If arr[0] is stored at address x, then arr[1] is stored at x + sizeof(int)
    // arr[2] is stored at x + sizeof(int) + sizeof(int)
    // and so on.
    int arr1[5]; 
    cout << "Size of integer in this compiler is " << sizeof(int) << "\n";
    for (int i = 0; i < 5; i++)
        // The use of '&' before a variable name, yields
        // address of variable.
        cout << "Address arr1[" << i << "] is " << &arr1[i] << "\n";
    //Traversing the array
    for(int i=0;i<6;i++) cout<<a4[i]<<" ";
    cout << "\n";
    //Size of arrays
    int a[10]={};
    int * p=a;
    cout << "Total address size of a:" << sizeof(a) << endl;
    cout << "Size of Pointer p:" << sizeof(p) << endl;
    //Size of p is same for any type of array like int/char/float etc.
    cout << "Size of each element in a:" << sizeof(a[0]) << endl;
    cout << "Number of elements in a:" << sizeof(a)/sizeof(a[0]) << endl;
    //Accessing elements of array using the pointers
    int arr[] = { 10, 20, 30, 40, 50, 60 };
    int* ptr = arr;
    cout << "Using arr[2]" << arr[2] << endl;
    cout << "Using *(arr+2)" << *(arr+2) << endl;
    cout << "Using ptr[2]" << ptr[2] << endl;
    cout << "Using *(ptr+2)" << *(ptr+2) << endl;
    //Passing to a function
    print(arr);
    print1(A);
    return 0;
}