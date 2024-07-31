class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>>tri = new ArrayList<>();
        if(numRows == 0)return tri;
        List<Integer> fr= new ArrayList<>();
        fr.add(1);
        tri.add(fr);
        for(int i=1;i<numRows;i++){
            List<Integer> pre = tri.get(i-1);
            List<Integer> row=new ArrayList<>();
            row.add(1);
            for(int j=1;j<i;j++){
                row.add(pre.get(j-1)+pre.get(j));
            }
            row.add(1);
            tri.add(row);
        }
        return tri;
    }
}