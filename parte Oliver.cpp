void int (){
     for (int i = 0 ; i < = V ; ++i )
     { distancia[ i ] = INF;
     visitador [ i ] = falce; 
     previo [ i ] = -1;
     
         }
     }
     
     void minimizacion (int actual, int adyacente , int peso){
          if (distancia [actual] + peso < distancia [adyacentye] ) {
              distancia[adyacente] = distancia [actual] + peso;
               previo [ adyacente ] = actual;
               Q.push( nodo ( adyacente , distacia [ adyacente ]));         }
          }


