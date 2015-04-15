
@interface NSStorage : NSObject {

    id _storage;
    q _hintCapacity;
    [4Q] _reserved;
}
 + (void) initialize;

 - (id) description;
 - (void) dealloc;
 - (Q) count;
 - (id) init;
 - (^v) elementAtIndex:(Q)a;
 - (id) initWithElementSize:(Q)acapacity:(Q)b;
 - (void) insertElements:(^v)acount:(Q)batIndex:(Q)c;
 - (void) removeElementAtIndex:(Q)a;
 - (Q) elementSize;
 - (void) setHintCapacity:(Q)a;
 - (Q) hintCapacity;
 - (void) replaceElementAtIndex:(Q)awithElement:(^v)b;
 - (void) removeElementsInRange:({_NSRange=QQ})a;
 - (^v) pointerToElement:(Q)adirectlyAccessibleElements:(^{_NSRange=QQ})b;
 - (void) insertElement:(^v)aatIndex:(Q)b;
 - (void) enumerateElementsUsingBlock:(@?)a;
 - (void) addElement:(^v)a;
 - (Q) capacity;


@end
