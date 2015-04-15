
@interface _EditScriptIndexedAtom : NSObject {

    long long _editOperation;
    unsigned long long _indexToEdit;
    unsigned long long _indexInArrayB;
    NSString* _replacementText;
}
@property (nonatomic, assign, readwrite) NSNumber* editOperation;
@property (nonatomic, assign, readwrite) NSNumber* indexToEdit;
@property (nonatomic, assign, readwrite) NSNumber* indexInArrayB;
@property (nonatomic, retain, readwrite) NSString* replacementText;
 + (id) atomWithEditOperation:(long long)aindexToEdit:(unsigned long long)bnewText:(id)cindexInArrayB:(unsigned long long)d;

 - (id) description;
 - (void) dealloc;
 - (void) setReplacementText:(id)a ;
 - (id) replacementText;
 - (long long) editOperation;
 - (unsigned long long) indexToEdit;
 - (void) setIndexToEdit:(unsigned long long)a ;
 - (void) setEditOperation:(long long)a ;
 - (void) setIndexInArrayB:(unsigned long long)a ;
 - (id) initWithEditOperation:(long long)a indexToEdit:(unsigned long long)b newText:(id)c indexInArrayB:(unsigned long long)d ;
 - (unsigned long long) indexInArrayB;


@end
