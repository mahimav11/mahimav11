#include <iostream>
using namespace std;

template <typename T>
void selectionSort(T a[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) 
        {
            if (a[j] < a[minIndex]) 
            {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        T temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }
}

template <class T>
void printArray(T a[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() 
{
    int ch;
    do
    {
        cout<<"\n1.SORT INTEGERS\n2.SORT FLOATS\n3.SORT CHARS\n";
        cout<<"ENTER YOUR CHOICE ";
        cin>>ch;
        switch(ch)
        {
            case 1: int a1[100] ;
                    int n1;
                    cout<<"ENTER ARRAY SIZE ";
                    cin>>n1;
                    cout<<"ENTER ARRAY ELEMENTS ";
                    for(int i=0;i<n1;i++)
                    {
                        cin>>a1[i];
                    }
                    cout << "ORIGINAL ARRAY: ";
                    printArray(a1, n1);
                    selectionSort(a1, n1);
                    cout << "SORTED ARRAY: ";
                    printArray(a1, n1);
                    break;
            case 2: float a2[100] ;
                    int n2;
                    cout<<"ENTER ARRAY SIZE ";
                    cin>>n2;
                    cout<<"ENTER ARRAY ELEMENTS ";
                    for(int i=0;i<n2;i++)
                    {
                        cin>>a2[i];
                    }
                    cout << "ORIGINAL ARRAY: ";
                    printArray(a2, n2);
                    selectionSort(a2, n2);
                    cout << "SORTED ARRAY: ";
                    printArray(a2, n2);
                    break;
            case 3: char a3[100] ;
                    int n3;
                    cout<<"ENTER ARRAY SIZE ";
                    cin>>n3;
                    cout<<"ENTER ARRAY ELEMENTS ";
                    for(int i=0;i<n3;i++)
                    {
                        cin>>a3[i];
                    }
                    cout << "ORIGINAL ARRAY: ";
                    printArray(a3, n3);
                    selectionSort(a3, n3);
                    cout << "SORTED ARRAY: ";
                    printArray(a3, n3);
                    break;
            default:cout<<"INVALID CHOICE ";
        }
    }
    while(ch<4 && ch>0);
   

    return 0;
}
