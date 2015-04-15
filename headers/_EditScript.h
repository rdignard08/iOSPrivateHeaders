
@interface _EditScript : NSObject {

    BOOL _orderAtomsAscending;
    @"_IntArray2D" _distanceMatrix;
    q _currentOperation;
    @"<_EditScriptData>" _itemAData;
    @"<_EditScriptData>" _itemBData;
    @"NSArray" _operationPrecedenceArray;
    @"NSMutableArray" _script;
}
@property (nonatomic, copy, readwrite) NSArray* operationPrecedenceArray;
@property (nonatomic, retain, readwrite) NSMutableArray* script;

 - (id) description;
 - (void) dealloc;
 - (id) initWithOperationPrecedence:(q)aorderAtomsAscending:(BOOL)b;
 - (void) computeDistanceMatrix;
 - (void) computeEditsFromMatrix;
 - (id) script;
 - (void) finalizeCurrentScriptAtom;
 - (void) initializeCurrentScriptAtom;
 - (void) addToCurrentScriptAtomEditOperation:(q)aeditIndex:(Q)bnewText:(id)cindexInArrayB:(Q)d;
 - (id) operationPrecedenceArrayFromOperationPrecedence:(q)a;
 - (void) setScript:(id)a;
 - (id) operationPrecedenceArray;
 - (void) setOperationPrecedenceArray:(id)a;


@end
