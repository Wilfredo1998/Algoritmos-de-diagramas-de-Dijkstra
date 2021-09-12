# Algoritmos-de-diagramas-de-Dijkstra
#define MAX 10005
#define Nodo pair< int , int >
#define INF 1<< 30 


struct cmp{
	bool operator() (const Nodo &a , const Nodo &b){
	}
};
vector< Nodo > ady[ MAX ];
int distancia [ MAX ];
bool visitado [ MAX ];
priority_queue< Nodo , vector<Nodo> , cmp > Q;
int V; 
int previo [ Max ];
