
@interface _NSProgressGroup : NSObject {

    @"NSProgress" _parent;
    q _portionOfParent;
    @"NSMutableSet" _children;
    @"_NSProgressFraction" _childrenFraction;
    Q _finishedChildrenCount;
    BOOL _closed;
}

 - (id) parent;
 - (void) pause;
 - (void) prioritize;
 - (id) _indentedDescription:(Q)a;
 - (id) initWithParent:(id)aportion:(q)b;
 - (void) addChild:(id)a;
 - (void) updateChildWithOldFraction:(id)anewFraction:(id)b;
 - (void) stopNotifications;
 - (id) description;
 - (void) dealloc;
 - (void) close;
 - (void) cancel;


@end
