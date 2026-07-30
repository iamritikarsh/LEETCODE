class Solution {
public:
    void rotatePart(int i , int j , vector<int>&v) {
        while(i<j){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
    void rotate(vector<int>& v, int k){
        int n = v.size();
        if (k>n) k = k%n;
        rotatePart(0,n-k-1,v);
        rotatePart(n-k,n-1,v);
        rotatePart(0,n-1,v);
        
    }        
};
   