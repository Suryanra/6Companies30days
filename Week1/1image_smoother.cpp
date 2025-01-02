class Solution {
public:
vector<pair<int,int>>direction={{1,0},{0,1},{1,1},{-1,0},{0,-1},{-1,-1},{0,0},{+1,-1},{-1,+1}};
int findValue(int i,int j,vector<vector<int>>&img,int row,int col){
int count=0,sum=0;
    for(auto dir:direction){
        int newRow=i+dir.first;
        int newCol=j+dir.second;
        if(newRow>=0 && newRow<row && newCol>=0 && newCol<col){
                count++;
                sum+=img[newRow][newCol];
        }
    }
    cout<<"for "<<i<<" "<<j<<" "<<sum<<" "<<count<<endl;
    return sum/count;


}
vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int row=img.size();
        int col=img[0].size();
        vector<vector<int>>res(row,vector<int>(col,0));

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                res[i][j]=findValue(i,j,img,row,col);
            }
        }   
        return res;

}


};