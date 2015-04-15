
@interface __NSSKGraphE : NSObject {

    ^{edge=Q[2Q]Q} _edges;
    ^{vertex=QQ^Q} _vertices;
    Q _numV;
    Q _numE;
    Q _currE;
    Q _dump;
    Q _l_end;
}

 - (void) dealloc;
 - (void) finalize;
 - (BOOL) isEmpty;
 - (id) initWithNumberOfVertices:(Q)anumberOfEdges:(Q)b;
 - (BOOL) addEdgeWithH1:(Q)awithH2:(Q)b;
 - (Q) numOfEdges;
 - (^^{edge}) isAcyclic;


@end
