#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class SolutionFourty{
public:
	int closesMeetingNode(vector<int>& edges, int node1, int node2){
		int n=size(edges);
		vector<int> m1(n,-1);
		vector<int> m2(n,-1);
		auto dfs=[&edges](int u, auto& memo)->void{
			int time=0;
			//o sea que aun no a sido visitado
			while(u != -1 && memo[u]==-1){
				memo[u] = time++;
				u=edges[u];
			}
		};
		dfs(node1, m1), dfs(node2, m2);
		int id=-1;
		int minMax=1e9;
		for(int i=0; i<n; i++){
			if(min(m1[i], m2[i]) > -1 && max(m1[i], m2[i])<minMax){
				minMax=max(m1[i], m2[i]);
				id=i;
			}
		}
		return id;
	}
};

#endif