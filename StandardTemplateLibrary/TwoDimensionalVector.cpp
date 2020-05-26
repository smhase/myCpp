#include <iostream>
#include <vector>

using namespace std;

int main() {
	// Two dimensional array
	vector< vector<int> > grid;

	// Two dimensional array which is pre initialized
	vector< vector<int> > pre_initialized_grid(3, vector<int>(4,0)) ;

	// You can add element. There is no restriction that all vectors should be of same size
	pre_initialized_grid[1].push_back(8);

	for (int row = 0; row < pre_initialized_grid.size(); row++) {
		for (int col = 0; col < pre_initialized_grid[row].size(); col++) {
			cout << pre_initialized_grid[row][col] << flush;
		}
		cout << endl;
	}
	return 0;
}