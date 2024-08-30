#include "solution.hpp"
#include "printVector.hpp"
#include "printInt.hpp"

int main(){
	vector<int> edges={2,2,3,-1};
	int node1=0, node2=0;
	SolutionFourty solution;
	int output=solution.closesMeetingNode(edges,node1,node2);
	cout<<"singles inputs: "<<endl;
	printInt(node1); printInt(node2);
	printVectorInt(edges);
	cout<<"output: "<<endl;
	printInt(output);

	return 0;
}