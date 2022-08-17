#include <iostream>
#include <map>
#include <set>

// Comparison function for sorting the set by increasing order of its pair's
// second value. If second value are equal, order by the pair's first value
struct comp
{
	template<typename T>
	bool operator()(const T& l, const T& r) const
	{
		if (l.second != r.second)
			return l.second < r.second;

		return l.first < r.first;
	}
};

int main()
{
	// input map
	std::map<std::string,int> map = {
		{"two", 2}, {"one", 1}, {"four", 4}, {"three", 3}
	};

	// create a empty vector of pairs
	std::set<std::pair<std::string,int>, comp> set(map.begin(), map.end());

	// print the vector
	for (auto const &pair: set) {
		std::cout << '{' << pair.first << "," << pair.second << '}' << '\n';
	}

	return 0;
}
