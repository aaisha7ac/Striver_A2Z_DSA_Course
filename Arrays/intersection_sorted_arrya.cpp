//The intersection of two arrays can be defined as the set containing common elements between the two arrays. 
// Given two sorted arrays of size n and m respectively, find their intersection.

class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the intersection of the two arrays. 
    vector<int> findIntersection(int a[], int b[], int n, int m)
    {

        vector<int> ans;

        // Optimized Solution  
        //TC = O(n);
        //SC = O(1);
        
        int i = 0, j = 0;
        while(i < n && j < m) {
            if(a[i] < b[j]) { 
                i++;
            }
            else if(b[j] < a[i]) {
                j++;
                
            }
            else{ //a[i] == b[j];
                ans.push_back(a[i]);
                i++;
                j++;
            }
        }
        return ans;


        /*
        TC = O(n * m)
        SC = O(m);
        int visit[m] = {0};
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(a[i] == b[j] && visit[j] == 0) {
                    ans.push_back(a[i]);
                    visit[j] = 1;
                    break;
                }
            }
        }
        return ans;
        */
    }
};








// Example 1:
// Input:
// n = 6, m = 5
// a[] = {1, 2, 3, 4, 5, 6}
// b[] = {3, 4, 5, 6, 7} 

// Output: 3 4 5 6
// Explanation: 
// 3 4 5 and 6 are the elements 
// in the intersection of two arrays.

// Example 2:
// Input:
// n = 8, m = 7
// a[] = {1, 2, 2, 3, 3, 4, 5,6}
// b[] = {2, 3, 3, 5, 6, 6, 7} 

// Output: 2 3 3 5 6
// Explanation: 
// 2 3 3 5 and 6 are the elements 
// in the intersection of two arrays.