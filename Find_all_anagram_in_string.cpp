class Solution {
public:
    // vector<int> findAnagrams(string s, string p) {//pat,txt
//        /*finding lengths of strings pat and txt*/
//     //    s= pat , p = txt
//        vector<int>ans;
// 	int n = p.length(), m = s.length();
// 	/*string sortedpat stores the sorted version of pat*/
// 	string sortedpat = s;
// 	sort(sortedpat.begin(), sortedpat.end());
// 	/*temp for storing the substring of length equal to
// 	* pat*/
// 	string temp;
// 	for (int i = 0; i <= n - m; i++) {
// 		temp = "";
// 		for (int k = i; k < m + i; k++){
// 			temp.push_back(p[k]);
//         }
// 		sort(temp.begin(), temp.end());
// 		/*checking whether sorted versions are equal or
// 		* not*/
// 		if (sortedpat == temp)
// 		    ans.push_back(i);
           
// 	} 
//  return ans;
vector<int> findAnagrams(string s, string p) {
        int s_len = s.length();
        int p_len = p.length();
        
        if(s.size() < p.size()) return {};
        
        vector<int> freq_p(26,0);
        vector<int> window(26,0);
        
        //first window
        for(int i=0;i<p_len;i++){
            freq_p[p[i]-'a']++;
            window[s[i]-'a']++;
        }
        
        vector<int> ans;
        if(freq_p == window) ans.push_back(0);
        
        for(int i=p_len;i<s_len;i++){
            window[s[i-p_len] - 'a']--;
            window[s[i] - 'a']++;
            
            if(freq_p == window) ans.push_back(i-p_len+1);
        }
        return ans;
    }
    
};




	

