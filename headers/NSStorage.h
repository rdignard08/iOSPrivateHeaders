
@interface NSStorage : NSObject {

    id _storage;
    long long _hintCapacity;
    [4Q] _reserved;
}
 + (void) initialize;

 - (id) description;
 - (void) dealloc;
 - (unsigned long long) count;
 - (id) init;
 - (^v) elementAtIndex:(unsigned long long)a;
 - (id) initWithElementSize:(unsigned long long)acapacity:(unsigned long long)b;
 - (void) insertElements:(^v)acount:(unsigned long long)batIndex:(unsigned long long)c;
 - (void) removeElementAtIndex:(unsigned long long)a;
 - (unsigned long long) elementSize;
 - (void) setHintCapacity:(unsigned long long)a;
 - (unsigned long long) hintCapacity;
 - (void) replaceElementAtIndex:(unsigned long long)awithElement:(^v)b;
 - (void) removeElementsInRange:({_NSRange=QQ})a;
 - (^v) pointerToElement:(unsigned long long)adirectlyAccessibleElements:(^{_NSRange=QQ})b;
 - (void) insertElement:(^v)aatIndex:(unsigned long long)b;
 - (void) enumerateElementsUsingBlock:(@?)a;
 - (void) addElement:(^v)a;
 - (unsigned long long) capacity;


@end
