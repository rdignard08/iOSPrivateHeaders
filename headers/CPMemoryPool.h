
@interface CPMemoryPool : NSObject {

    {_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]} _lock;
    @"NSMutableArray" _files;
    * _label;
    Q _slotLength;
}
@property (nonatomic, assign, readonly) NSNumber* slotLength;

 - (void) dealloc;
 - (id) nextSlotWithBytes:(r^v)alength:(Q)b;
 - (id) initWithLabel:(r*)aslotLength:(Q)b;
 - (Q) slotLength;


@end
