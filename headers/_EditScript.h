
@interface _EditScript : NSObject {

    BOOL _orderAtomsAscending;
    _IntArray2D _distanceMatrix;
    long long _currentOperation;
    <_EditScriptData> _itemAData;
    <_EditScriptData> _itemBData;
    NSArray _operationPrecedenceArray;
    NSMutableArray _script;
}
@property (nonatomic, copy, readwrite) NSArray* operationPrecedenceArray;
@property (nonatomic, retain, readwrite) NSMutableArray* script;

 - (id) description;
 - (void) dealloc;
 - (id) initWithOperationPrecedence:(long long)aorderAtomsAscending:(BOOL)b;
 - (void) computeDistanceMatrix;
 - (void) computeEditsFromMatrix;
 - (id) script;
 - (void) finalizeCurrentScriptAtom;
 - (void) initializeCurrentScriptAtom;
 - (void) addToCurrentScriptAtomEditOperation:(long long)aeditIndex:(unsigned long long)bnewText:(id)cindexInArrayB:(unsigned long long)d;
 - (id) operationPrecedenceArrayFromOperationPrecedence:(long long)a;
 - (void) setScript:(id)a;
 - (id) operationPrecedenceArray;
 - (void) setOperationPrecedenceArray:(id)a;


@end
