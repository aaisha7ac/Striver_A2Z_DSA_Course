//Number Hashing

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];

    //Entering the elements of the array
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    cout << "The elements of the array are:" << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    //precompute
    int hash[100];
    for(int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    int q;
    cin >> q;
    while(q--) {
        int num;
        cin >> num;
        cout << num << " is occuring for " << hash[num] << " times";
        cout << endl;
    }
}

//Input :
// n = 10
// arr[ ] = {1,2,3,2,1,0,2,5,2,1};
// q = 2
// num = 1;
// num = 2;

//Output:
// 1 is occuring for 3 times;
// 2 is occuring for 4 times;