class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum=0;
        stack<int> st;
        for(string x: operations){
            if(x=="+"){
                int tp=st.top();
                st.pop();
                int add = st.top() + tp;
                st.push(tp);
                st.push(add);
            }else if(x=="D"){
                int db= st.top() * 2;
                st.push(db);
            }
            else if(x=="C"){
                st.pop();
            }
            else{
                int curx=stoi(x);
                st.push(curx);
            }
        }
        while(!st.empty()){
            sum+=st.top();
            cout<<st.top()<<' ';
            st.pop();
        }
        return sum;
    }
};