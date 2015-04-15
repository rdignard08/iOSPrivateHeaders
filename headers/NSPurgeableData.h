
@protocol NSDiscardableContent;
@interface NSPurgeableData : NSMutableData <NSDiscardableContent> {

    Q _length;
    i _accessCount;
    [32C] _private;
    ^v _reserved;
}

 - (id) initWithBytes:(^v)alength:(Q)bcopy:(BOOL)cdeallocator:(@?)d;
 - (void) _destroyMemory;
 - (BOOL) beginContentAccess;
 - (void) endContentAccess;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (r^v) bytes;
 - (^v) mutableBytes;
 - (void) setLength:(Q)a;
 - (id) initWithCapacity:(Q)a;
 - (void) discardContentIfPossible;
 - (BOOL) isContentDiscarded;
 - (Q) length;
 - (id) init;


@end
