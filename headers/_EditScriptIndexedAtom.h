
@interface _EditScriptIndexedAtom : NSObject {

    q _editOperation;
    Q _indexToEdit;
    Q _indexInArrayB;
    @"NSString" _replacementText;
}
@property (nonatomic, assign, readwrite) NSNumber* editOperation;
@property (nonatomic, assign, readwrite) NSNumber* indexToEdit;
@property (nonatomic, assign, readwrite) NSNumber* indexInArrayB;
@property (nonatomic, retain, readwrite) NSString* replacementText;
 + (id) atomWithEditOperation:(q)aindexToEdit:(Q)bnewText:(id)cindexInArrayB:(Q)d;

 - (id) description;
 - (void) dealloc;
 - (void) setReplacementText:(id)a;
 - (id) replacementText;
 - (q) editOperation;
 - (Q) indexToEdit;
 - (void) setIndexToEdit:(Q)a;
 - (void) setEditOperation:(q)a;
 - (void) setIndexInArrayB:(Q)a;
 - (id) initWithEditOperation:(q)aindexToEdit:(Q)bnewText:(id)cindexInArrayB:(Q)d;
 - (Q) indexInArrayB;


@end
