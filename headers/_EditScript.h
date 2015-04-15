
@interface _EditScript : NSObject {

    BOOL _orderAtomsAscending;
    _IntArray2D* _distanceMatrix;
    long long _currentOperation;
    <_EditScriptData>* _itemAData;
    <_EditScriptData>* _itemBData;
    NSArray* _operationPrecedenceArray;
    NSMutableArray* _script;
}
@property (nonatomic, copy, readwrite) NSArray* operationPrecedenceArray;
@property (nonatomic, retain, readwrite) NSMutableArray* script;

 - (id) description;
 - (void) dealloc;
 - (id) initWithOperationPrecedence:(long long)a orderAtomsAscending:(BOOL)b ;
 - (void) computeDistanceMatrix;
 - (void) computeEditsFromMatrix;
 - (id) script;
 - (void) finalizeCurrentScriptAtom;
 - (void) initializeCurrentScriptAtom;
 - (void) addToCurrentScriptAtomEditOperation:(long long)a editIndex:(unsigned long long)b newText:(id)c indexInArrayB:(unsigned long long)d ;
 - (id) operationPrecedenceArrayFromOperationPrecedence:(long long)a ;
 - (void) setScript:(id)a ;
 - (id) operationPrecedenceArray;
 - (void) setOperationPrecedenceArray:(id)a ;


@end
