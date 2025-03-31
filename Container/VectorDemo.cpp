#include "VectorDemo.h"

/*
* ����չʾ����vector�ķ���
*/
void createVector() {
	//1 ����һ���յ�vector
	vector<int> v1;
	//2 ����һ��ָ����С��vector
	vector<int> v2(10);
	for (auto i : v2) {
		std::cout << i << std::endl;
	}
	//3 ����һ��ָ����С���ҳ�ʼ����vector
	vector<int> v3(10, 1);
	//4 ����һ��ָ����С����ʹ�ô����ų�ʼ����vector
	vector<int> v4{ 1,2,3,4,5 };
	//5 ����һ��vector,ʹ������һ��vector��ʼ��
	vector<int> v5(v4);
	//6 ����һ��vector,ʹ������һ��vector��һ���ֳ�ʼ��
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