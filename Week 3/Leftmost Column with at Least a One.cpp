/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int row, int col);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
       vector<int> v;
       v= binaryMatrix.dimensions();
       int row = v[0], col = v[1];
       int res=INT_MAX;
       for(int i=0; i<row; i++){
           int low = 0, high = col-1;
           while(low<=high){
               int mid = low + (high-low)/2;
               if(binaryMatrix.get(i,mid) == 1){
                   res = min(res,mid);
                   high=mid-1;
               }
               else low=mid+1;
           }           
           
       }
        return res==INT_MAX ? -1 : res;
    }
    
     
};
