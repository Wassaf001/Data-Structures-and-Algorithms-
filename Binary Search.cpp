#include<bits/stdc++.h>
using namespace std;

void binary_search(vector<int>& arr, int element, map<int, int>& mp)
{
    int s = 0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;
    int c=0;
    while(s<=e)
    {
        if(arr[mid]==element)
        {
            cout << "Element is present at index: " << mp[element] << endl;
            c++;
            break;
        }
        else if(arr[mid]>element)
        {
            e = mid-1;
        }
        else
        {
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    if(c==0)
    {
        cout << "Element not found." << endl;
    }
}

int main()
{
    cin.tie(NULL);
    cout << "Enter the number of elements in the array: ";
    int n;
    cin >> n;
    int a;
    vector<int>arr;
    map<int, int> mp;
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++)
    {
       cin >> a;
       arr.push_back(a);
       mp[a] = i;
    }
    int e;
    cout << "Enter the element you want to search in the array: ";
    cin >> e;
    sort(arr.begin(), arr.end());
    binary_search(arr, e, mp);
    return 0;
}
