
@interface CPMemoryPoolFile : NSObject {

    {_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]} _mutex;
    i _fd;
    * _slots;
    Q _slotCount;
    Q _slotLength;
    ^{__CFBitVector=} _usedSlots;
    ^{__CFAllocator=} _deallocator;
}

 - (void) dealloc;
 - (id) initWithLabel:(r*)aslotCount:(Q)bslotLength:(Q)c;
 - (id) nextSlotWithBytes:(r^v)alength:(Q)b;
 - (void) returnSlot:(^v)a;


@end
