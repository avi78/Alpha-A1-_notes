class Solution
{
	public:
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    sort(S.begin(), S.end());
        vector<string> result;
        set<string> unique_permutations;
        
        do {
            unique_permutations.insert(S);
        } while (next_permutation(S.begin(), S.end()));
        
        // Copy unique permutations to the result vector
        for (const auto& perm : unique_permutations) {
            result.push_back(perm);
        }
        
        return result;
		}
};