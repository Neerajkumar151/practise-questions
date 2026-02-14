class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row;
        vector<int> column;

        int r=matrix.size();
        int c=matrix[0].size();

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(matrix[i][j]==0){
                    row.push_back(i);
                    column.push_back(j);
                }
            }
        }

        for(int temp:row){
            for(int i=0; i<c; i++){
                matrix[temp][i]=0;
            }
        }

        for(int temp:column){
            for(int j=0; j<r; j++){
                matrix[j][temp]=0;
            }
        }
    }
};