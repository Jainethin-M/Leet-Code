class Solution {
    public int numIslands(char[][] grid) {
        int count=0;
        for(int i=0;i<grid.length;i++){
            for(int j=0;j<grid[i].length;j++){
                if(grid[i][j]=='1'){
                    clil(grid,i,j);
                    count+=1;
                }
            }
        }
        return count;
    }
    public void clil(char[][] a,int i,int j){
        if(i<0||j<0||i>=a.length||j>=a[i].length||a[i][j]!='1')return;
        a[i][j]='2';
        clil(a,i+1,j);
        clil(a,i-1,j);
        clil(a,i,j+1);
        clil(a,i,j-1);
    }
}