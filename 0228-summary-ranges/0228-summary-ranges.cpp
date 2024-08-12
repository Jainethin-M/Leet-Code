class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        auto it=nums.begin();
        
        while(it!=nums.end()){
            string res;
            int st=*it;
            int pre=st;
            while((it+1)!=nums.end() && *(it+1)==pre+1){
                it++;
                pre=*(it);
            }
            int end=*it;
            if(st==end){
                ans.push_back(to_string(st));
                
            }else{

                end=*it;
                res+=to_string(st);
                res+="->";
                res+=to_string(end);
                ans.push_back(res);
                
            }
            it++;
        }
        return ans;
    }
};