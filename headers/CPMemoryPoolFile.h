
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
 - (id) initWithLabel:(r*)aslotCount:(unsigned long long)bslotLength:(unsigned long long)c;
 - (id) nextSlotWithBytes:(r^v)alength:(unsigned long long)b;
 - (void) returnSlot:(^v)a;


@end
