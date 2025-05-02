//
// Created by guijunliu on 2025/4/20.
//

#include "graph.h"
#include <vector>
#include <queue>
#include <climits>

using namespace std;

// 求最短路的算法
int DijStra(int start,int end, vector<vector<int>> &graph){
    vector<bool> used(graph.size(), false);
    vector<int> dist(graph.size(),0);
    used[start]=true;
    // 加入U集合
    for(int i=0;i<graph.size();++i){
         dist[i]=graph[start][i];
    }
    // 寻找U里面的min和k，并更新U集合, 直到全部使用
    for(int i=1;i<graph.size();++i){
        int k=-1,minval=INT_MAX;
        for(int j=0;j<graph.size();j++){
            if(dist[j]<minval && !used[j]){
                minval=dist[j],k=j;
            }
        }
        if(k==-1) break;
        used[k]=true;
        for(int j=0;j<graph.size();j++){
            if(used[j]) continue;
            if(dist[j]>dist[k]+graph[k][j]) dist[j]=dist[k]+graph[k][j];
        }
    }
    return dist[end];
}


int main(){
    vector<vector<int>> graph;
}

