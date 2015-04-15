
@interface _NSUndoStack : NSObject {

    Q _max;
    Q _count;
    Q _nestingLevel;
    @"_NSUndoObject" _head;
}

 - (id) topUndoObject;
 - (void) setMax:(Q)a;
 - (Q) nestingLevel;
 - (void) markBegin;
 - (BOOL) isDiscardable;
 - (id) popUndoObject;
 - (void) markEnd;
 - (Q) max;
 - (id) groupIdentifier;
 - (void) setGroupIdentifier:(id)a;
 - (void) setDiscardable:(BOOL)a;
 - (BOOL) popAndInvoke;
 - (void) removeAllObjectsWithTarget:(id)a;
 - (void) push:(id)a;
 - (void) _removeBottom;
 - (id) _beginMark;
 - (id) description;
 - (void) dealloc;
 - (Q) count;
 - (void) removeAllObjects;
 - (void) removeObject:(id)a;
 - (id) init;


@end
