#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    int max = INT_MIN;
    int min = INT_MAX;
    int i;
    if(n % 2 == 0)
    {
        if(arr[0] > arr[1])
        {
            max = arr[0];
            min = arr[1];
        }
        else 
        {
            min = arr[0];
            max = arr[1];
        }
        i = 2;
    }
    else
    {
        max = arr[0];
        min = arr[0];
        i = 1;
    }
    for(;i<n-1;i+=2)
    {
        if(arr[i] > arr[i+1])
        {
            if(arr[i] > max)
                max = arr[i];
            if(arr[i+1] < min)
                min = arr[i+1];
        }
        else
        {
            if(arr[i] < min)
                min = arr[i];
            if(arr[i+1] > max)
                max = arr[i+1];
        }
    }
    cout << "Max element : " << max << endl;
    cout << "Min element : " << min << endl;
return 0;
}