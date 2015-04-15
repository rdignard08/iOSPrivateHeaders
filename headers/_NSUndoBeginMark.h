
@interface _NSUndoBeginMark : _NSUndoObject {

    id _groupIdentifier;
    BOOL _isDiscardable;
}

 - (BOOL) isBeginMark;
 - (BOOL) isDiscardable;
 - (id) groupIdentifier;
 - (void) setGroupIdentifier:(id)a ;
 - (void) setDiscardable:(BOOL)a ;
 - (id) description;
 - (void) dealloc;


@end
