#ifndef __AL_GRAPH_DFS__
#define __AL_GRAPH_DFS__

#include "DLinkedList.h"	// 연결 리스트를 가져다 쓴다!

// 정점의 이름들을 상수화
enum { A, B, C, D, E, F, G, H, I, J };

typedef struct _ual
{
	int numV;
	int numE;
	List* adjList;
	int* visitInfo;
} ALGraph;

//그래프의 초기화
void GraphInit(ALGraph* pg, int nv);

// 그래프의 리소스 해재
void GraphDestroy(ALGraph* pg);

// 간선의 추가
void AddEdge(ALGraph* pg, int formV, int toV);

//간선의 정보 출력
void ShowGraphEdgeInfo(ALGraph* pg);

// 정점의 정보 출력: Depth First Search 기반
void DFShowGraphVertex(ALGraph* pg, int startV);

#endif