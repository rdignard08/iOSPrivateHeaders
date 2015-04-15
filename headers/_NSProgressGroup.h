
@interface _NSProgressGroup : NSObject {

    NSProgress _parent;
    long long _portionOfParent;
    NSMutableSet _children;
    _NSProgressFraction _childrenFraction;
    unsigned long long _finishedChildrenCount;
    BOOL _closed;
}

 - (id) parent;
 - (void) pause;
 - (void) prioritize;
 - (id) _indentedDescription:(unsigned long long)a;
 - (id) initWithParent:(id)aportion:(long long)b;
 - (void) addChild:(id)a;
 - (void) updateChildWithOldFraction:(id)anewFraction:(id)b;
 - (void) stopNotifications;
 - (id) description;
 - (void) dealloc;
 - (void) close;
 - (void) cancel;


@end
