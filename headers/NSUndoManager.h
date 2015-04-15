
@interface NSUndoManager : NSObject {

    id _undoStack;
    id _redoStack;
    NSArray* _runLoopModes;
    unsigned long long _NSUndoManagerPrivate1;
    id _target;
    id _proxy;
    ^v _NSUndoManagerPrivate2;
    ^v _NSUndoManagerPrivate3;
}
@property (atomic, assign, readonly) NSNumber* groupingLevel;
@property (atomic, assign, readonly, getter=isUndoRegistrationEnabled) NSNumber* undoRegistrationEnabled;
@property (atomic, assign, readwrite) NSNumber* groupsByEvent;
@property (atomic, assign, readwrite) NSNumber* levelsOfUndo;
@property (atomic, copy, readwrite) NSArray* runLoopModes;
@property (atomic, assign, readonly) NSNumber* canUndo;
@property (atomic, assign, readonly) NSNumber* canRedo;
@property (atomic, assign, readonly, getter=isUndoing) NSNumber* undoing;
@property (atomic, assign, readonly, getter=isRedoing) NSNumber* redoing;
@property (atomic, assign, readonly) NSNumber* undoActionIsDiscardable;
@property (atomic, assign, readonly) NSNumber* redoActionIsDiscardable;
@property (atomic, copy, readonly) NSString* undoActionName;
@property (atomic, copy, readonly) NSString* redoActionName;
@property (atomic, copy, readonly) NSString* undoMenuItemTitle;
@property (atomic, copy, readonly) NSString* redoMenuItemTitle;
 + (void) _setEndsTopLevelGroupingsAfterRunLoopIterations:(BOOL)a;
 + (void) _endTopLevelGroupings;

 - (void) setRunLoopModes:(id)a ;
 - (id) _methodSignatureForTargetSelector:(SEL)a ;
 - (void) _forwardTargetInvocation:(id)a ;
 - (id) _undoStack;
 - (void) endUndoGrouping;
 - (void) _processEndOfEventNotification:(id)a ;
 - (BOOL) _endUndoGroupRemovingIfEmpty:(BOOL)a ;
 - (void) disableUndoRegistration;
 - (void) undoNestedGroup;
 - (void) enableUndoRegistration;
 - (void) _commitUndoGrouping;
 - (void) _rollbackUndoGrouping;
 - (void) _delayAutomaticTermination:(double)a ;
 - (id) runLoopModes;
 - (void) _scheduleAutomaticTopLevelGroupEnding;
 - (void) beginUndoGrouping;
 - (void) _prepareEventGrouping;
 - (void) _postCheckpointNotification;
 - (void) _cancelAutomaticTopLevelGroupEnding;
 - (BOOL) canRedo;
 - (BOOL) groupsByEvent;
 - (void) _registerUndoObject:(id)a ;
 - (void) _setGroupIdentifier:(id)a ;
 - (BOOL) canUndo;
 - (id) undoActionName;
 - (id) undoMenuTitleForUndoActionName:(id)a ;
 - (id) redoActionName;
 - (id) redoMenuTitleForUndoActionName:(id)a ;
 - (void) setLevelsOfUndo:(unsigned long long)a ;
 - (unsigned long long) levelsOfUndo;
 - (id) prepareWithInvocationTarget:(id)a ;
 - (void) setActionIsDiscardable:(BOOL)a ;
 - (BOOL) undoActionIsDiscardable;
 - (BOOL) redoActionIsDiscardable;
 - (void) dealloc;
 - (void) finalize;
 - (id) redoMenuItemTitle;
 - (id) undoMenuItemTitle;
 - (BOOL) isUndoRegistrationEnabled;
 - (void) removeAllActions;
 - (void) setGroupsByEvent:(BOOL)a ;
 - (BOOL) _shouldCoalesceTypingForText:(id)a ;
 - (id) init;
 - (BOOL) isUndoing;
 - (BOOL) isRedoing;
 - (void) registerUndoWithTarget:(id)a selector:(SEL)b object:(id)c ;
 - (void) setActionName:(id)a ;
 - (long long) groupingLevel;
 - (void) removeAllActionsWithTarget:(id)a ;
 - (void) undo;
 - (void) redo;


@end
