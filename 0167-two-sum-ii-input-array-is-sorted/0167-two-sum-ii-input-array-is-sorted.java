class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int ap = 0;
        int bp=numbers.length -1;

        while(ap<=bp){
            int sum=numbers[ap]+numbers[bp];
            if(sum>target){
                bp-=1;
            }else if(sum<target){
                ap+=1;
            }else if(sum==target){
                return new int[] {ap+1,bp+1};
            }
        }
        return null;
    }
}