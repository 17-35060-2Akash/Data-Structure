#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {7, 6, 5, 4, 3, 2 , 1};

    sort(begin(arr),end(arr));

    int first = 0;
    int last = 6;

    for(int i=0;i< 7;i++)
        cout << arr[i] << " ";

    cout << endl;



    int n;
    int mid = (first+last)/2;
    cin >> n;

    while(1){
        if(arr[mid] == n)
            break;
        if(n > arr[mid]){
            first = mid+1;
        }
        else if(n < arr[mid]){
            last = mid - 1;
        }
        mid = (first+last)/2;

        if(first > last)
            break;
    }

    if(first > last)
        cout << "Value not found!" << endl;
    else
        cout << mid << endl;

    return 0;
}


