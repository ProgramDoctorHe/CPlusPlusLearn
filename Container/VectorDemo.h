#pragma once
#include <vector>
using std::vector;
bool searchVectorReturnBool(vector<int>::const_iterator begin, vector<int>::const_iterator end, int target);
vector<int>::const_iterator searchVectorReturnIterator(vector<int>::const_iterator begin, vector<int>::const_iterator end, int target);