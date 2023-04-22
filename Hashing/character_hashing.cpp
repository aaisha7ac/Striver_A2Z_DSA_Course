//Character Hashing

#include <iostream>
using namespace std;

int main() {
string s;
cin >> s;

//precompute
int hash[26]; //for alphabets

// int hash[256]; for all characters;

for(int i = 0; i < s.length(); i++) {
    hash[s[i] - 'a']++; // for lower case
    //hash[s[i] - 'A']++; for upper case
}

int q;
cin >> q;
while(q--) {
    char ch;
    cin >> ch;
    cout << "The number of times " << ch << " occurs is " << hash[ch -'a'];
    cout << endl;
}

return 0;
}

//Input : pineapple
// q = 2
// char = p;
// char = e;

//Output:
// The number of times p occurs is 3;
// The number of times e occurs is 2;