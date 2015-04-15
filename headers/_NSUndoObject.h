
@interface _NSUndoObject : NSObject {

    _NSUndoObject next;
    _NSUndoObject previous;
    id _target;
}

 - (id) target;
 - (BOOL) isEndMark;
 - (BOOL) isBeginMark;
 - (id) initWithTarget:(id)a;
 - (void) invoke;
 - (id) init;


@end
