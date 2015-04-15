
@interface __NSSKGraphE : NSObject {

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
 - (id) initWithNumberOfVertices:(unsigned long long)anumberOfEdges:(unsigned long long)b;
 - (BOOL) addEdgeWithH1:(unsigned long long)awithH2:(unsigned long long)b;
 - (unsigned long long) numOfEdges;
 - (^^{edge}) isAcyclic;


@end
