
@interface _NSUndoStack : NSObject {

    unsigned long long _max;
    unsigned long long _count;
    unsigned long long _nestingLevel;
    _NSUndoObject* _head;
}

 - (id) topUndoObject;
 - (void) setMax:(unsigned long long)a;
 - (unsigned long long) nestingLevel;
 - (void) markBegin;
 - (BOOL) isDiscardable;
 - (id) popUndoObject;
 - (void) markEnd;
 - (unsigned long long) max;
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
 - (unsigned long long) count;
 - (void) removeAllObjects;
 - (void) removeObject:(id)a;
 - (id) init;


@end
