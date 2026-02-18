class Solution {
public:
    int bestClosingTime(string c) {
        int n = c.length();
        vector<int> pre(n+1);
        vector<int> suf(n+1);
        pre[0] =0;
        for(int i=0;i<n;i++){
            pre[i+1] = pre[i] + ((c[i]=='N') ? 1 : 0);
        }
        suf[n] = 0;
        for(int i=n-1;i>=0;i--){
            suf[i] = suf[i+1] + ((c[i]=='Y') ? 1 : 0);
        }
        int minP = n;
        for(int i=0;i<=n;i++){
            pre[i] += suf[i];
            // int pen = pre[i];
            minP = min(pre[i],minP);
        }
        for(int i=0;i<=n;i++){
            // int pen = pre[i];
            if(pre[i]==minP) return i;
        }
        return n;

    }
};