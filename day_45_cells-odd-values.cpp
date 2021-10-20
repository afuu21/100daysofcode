class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int odds = 0;
	unordered_set<int> rows{};
	unordered_set<int> cols{};
	for (const auto & p : indices)
	{
		// If the row hasn't been flipped to odds, indicate as such,
		// else remove row as it has been flipped back to even.
		if(rows.count(p[0]) == 0)
		{
			rows.insert(p[0]);
		}
		else
		{
			rows.erase(p[0]);
		}
		// Same for columns
		if(cols.count(p[1]) == 0)
		{
			cols.insert(p[1]);
		}
		else
		{
			cols.erase(p[1]);  
		}
	}
	// Where flipped rows and columns cross, that number remains even.
	// I.E. The number of odds corresponds to
	//      the product of odd rows and number of columns that haven't been flipped,
    //      added to
	//      the product of odd columns and number of rows that haven't been flipped.
	return rows.size() * (m - cols.size()) + cols.size() * (n - rows.size());
    }
};
