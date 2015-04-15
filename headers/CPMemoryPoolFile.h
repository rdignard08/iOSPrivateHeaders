
@interface CPMemoryPoolFile : NSObject {

    {_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]} _mutex;
    int _fd;
    char* _slots;
    unsigned long long _slotCount;
    unsigned long long _slotLength;
    ^{__CFBitVector=} _usedSlots;
    ^{__CFAllocator=} _deallocator;
}

 - (void) dealloc;
 - (id) initWithLabel:(r*)a slotCount:(unsigned long long)b slotLength:(unsigned long long)c ;
 - (id) nextSlotWithBytes:(r^v)a length:(unsigned long long)b ;
 - (void) returnSlot:(^v)a ;


@end
