
@interface __NSSKGraph : NSObject {

    ^{edge=Q[2Q]Q} _edges;
    ^{vertex=QQ^Q} _vertices;
    unsigned long long _numV;
    unsigned long long _numE;
    unsigned long long _currE;
    unsigned long long _dump;
    unsigned long long _l_end;
}

 - (void) dealloc;
 - (void) finalize;
 - (BOOL) isEmpty;
 - (id) initWithNumberOfVertices:(long long)a numberOfEdges:(long long)b ;
 - (BOOL) addEdgeWithH1:(unsigned long long)a withH2:(unsigned long long)b ;
 - (unsigned long long) numOfEdges;
 - (^^{edge}) isAcyclic;


@end
