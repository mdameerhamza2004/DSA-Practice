class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int totalRow = matrix.length;
        int totalCol = matrix[0].length;

        int n = totalRow * totalCol;
        int str =0;
        int end= n-1;
        while(str<=end){
            int mid = str+(end-str)/2;
            int rowInd = mid/totalCol;
            int colInd = mid%totalCol;

            if(matrix[rowInd][colInd] == target){
                return true;
            }
            else if(matrix[rowInd][colInd] > target){
                end = mid-1;
            }
            else{
                str = mid+1;
            }
        }
        return false;
    }
}