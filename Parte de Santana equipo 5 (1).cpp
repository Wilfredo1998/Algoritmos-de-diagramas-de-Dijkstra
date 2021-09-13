Void int(){
For ( int I = 0: I <= V: ++I ){
	Distancia [ I ] = INF: //inicializamos todas las dstancia con valor limite
	Visitado [ i ] = false: //inicializamos todos los  verticales o nodos como no visitados
	Previo [ i ] = -1;	//inicilizamos el previo del vertice i con -1
 }
} 

//paso de minimización
Void minimización ( int actual . int. adyacente, int peso ){
If ( distancia [ actual] + peso < distancia a [adayecente]) {
Distancia [ adayecente] = distancia [actual] + peso:
Previo [ adyacente] = actual:
q.push ( nodo( adayacente, distancia[ adyacente] ) );
}
}

