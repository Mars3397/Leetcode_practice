class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string, char> umap_s;
        unordered_map<char, char> umap_p;
        string pattern_encode = "", s_encode = ""; char count_s = 'a', count_p = 'a';
        for (int i = 0; i < pattern.size(); i++) {
            if (umap_p.find(pattern[i]) == umap_p.end()) {
                umap_p[pattern[i]] = count_p++;
            } 
            pattern_encode += umap_p[pattern[i]];
        }
        int front = 0, end = 0, n = s.size();
        for (; end < n; end++) {
            if (s[end] == ' ') {
                string word = s.substr(front, end - front);
                if (umap_s.find(word) == umap_s.end()) {
                    umap_s[word] = count_s++;
                } 
                front = end + 1;
                s_encode += umap_s[word];
            }
        }
        string word = s.substr(front, end - front);
        if (umap_s.find(word) == umap_s.end()) {
            umap_s[word] = count_s++;
        }
        s_encode += umap_s[word];
        return s_encode == pattern_encode;
    }
};