#include "VectorDemo.h"

/*
* 用于展示创建vector的方法
*/
void createVector() {
	//1 创建一个空的vector
	vector<int> v1;
	//2 创建一个指定大小的vector
	vector<int> v2(10);
	for (auto i : v2) {
		std::cout << i << std::endl;
	}
	//3 创建一个指定大小并且初始化的vector
	vector<int> v3(10, 1);
	//4 创建一个指定大小并且使用大括号初始化的vector
	vector<int> v4{ 1,2,3,4,5 };
	//5 创建一个vector,使用另外一个vector初始化
	vector<int> v5(v4);
	//6 创建一个vector,使用另外一个vector的一部分初始化
	vector<int> v6(v4.begin(), v4.begin() + 3);
}

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