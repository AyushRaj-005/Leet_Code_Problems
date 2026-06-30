class Solution {
public:
    string reverseStr(string s, int k) {
        for (int i =0;i<s.length();i+=2*k){
            reverse(s.begin()+i,s.begin()+min(i+k,(int)s.length()));
        }
        return s;
    }
    int main() {
        string S;
        int k;
        cin>>S>>k;
        cout<<reverseStr(S,k);
        return 0;
    }
};