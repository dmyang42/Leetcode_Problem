class Solution {
public:
    int maxProduct(vector<string>& words) 
    {
        int size, tmp = 0;
        vector<int> seq(words.size());
        for (int i = 0; i < words.size(); ++i)
        {
            for (char c : words[i])
            {
                seq[i] |= 1 << (c - 'a');
            }
        }
        for (int i = 0; i < words.size(); ++i)
        {
            for (int j = i + 1; j < words.size(); ++j)
            {
                int k = seq[i] & seq[j];
                if (!k)
                {
                    size = words[i].size() * words[j].size();
                    if (size > tmp)
                    {
                       tmp = size; 
                    }
                }
            }
        }
        return tmp;
    }
};
