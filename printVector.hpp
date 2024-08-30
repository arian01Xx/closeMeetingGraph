#ifndef PRINT_VECTOR_INT_HPP
#define PRINT_VECTOR_INT_HPP

#include <vector>
#include <iostream>

using namespace std;

void printVectorInt(vector<int> values){
	cout<<"original vector"<<endl;
	for(const auto& it: values){
		cout<<it<<" ";
	}
	cout<<endl;
}

#endif