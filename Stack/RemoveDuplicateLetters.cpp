/*
     @author
     Kaushik Dwivedi
     
     Problem: Given a string s, remove duplicate letters so that every letter appears once and only once. 
     You must make sure your result is the smallest in lexicographical order among all possible results.

*/

class Solution {
public:
    string removeDuplicateLetters(string s) {
        map<char,int>mp;
        for(int i=0;i<s.length();i++)
            mp[s[i]]=i;
        unordered_set<char>st;
        stack<char>sta;
        for(int i=0;i<s.length();i++){
            if(st.find(s[i])==st.end()){
                
                while(!sta.empty() and sta.top()>s[i] and mp[sta.top()]>i){
                    st.erase(sta.top());
                    sta.pop();
                }
                    
                
                    sta.push(s[i]);
                    st.insert(s[i]);
            
            }
        }
        string ans="";
        while(!sta.empty()){
            ans+=sta.top();
            sta.pop();
        }
        reverse(ans.begin(),ans.end());    
        return ans;
    }
};
