
@interface CPMemoryPool : NSObject {

    {_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]} _lock;
    NSMutableArray* _files;
    char* _label;
    unsigned long long _slotLength;
}
@property (nonatomic, assign, readonly) NSNumber* slotLength;

 - (void) dealloc;
 - (id) nextSlotWithBytes:(r^v)a length:(unsigned long long)b ;
 - (id) initWithLabel:(r*)a slotLength:(unsigned long long)b ;
 - (unsigned long long) slotLength;


@end
