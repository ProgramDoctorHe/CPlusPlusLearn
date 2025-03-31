#include "VectorDemo.h"

bool searchVectorReturnBool(vector<int>::const_iterator begin,vector<int>::const_iterator end,int target) {
	bool result = false;
	while (begin != end) {
		if (*begin == target) {
			result = true;
			break;
		}
		begin++;
	}
	return result;
}

vector<int>::const_iterator searchVectorReturnIterator(vector<int>::const_iterator begin, vector<int>::const_iterator end, int target) {
	vector<int> ::const_iterator result = end;
	while (begin != end) {
		if (*begin != target) {
			begin++;
		}
		else{
			result = begin;
			break;
		}
	}
	return result;
}