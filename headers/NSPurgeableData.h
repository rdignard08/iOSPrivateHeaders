
@protocol NSDiscardableContent;
@interface NSPurgeableData : NSMutableData <NSDiscardableContent> {

    unsigned long long _length;
    int _accessCount;
    [32C] _private;
    ^v _reserved;
}

 - (id) initWithBytes:(^v)alength:(unsigned long long)bcopy:(BOOL)cdeallocator:(@?)d;
 - (void) _destroyMemory;
 - (BOOL) beginContentAccess;
 - (void) endContentAccess;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (r^v) bytes;
 - (^v) mutableBytes;
 - (void) setLength:(unsigned long long)a;
 - (id) initWithCapacity:(unsigned long long)a;
 - (void) discardContentIfPossible;
 - (BOOL) isContentDiscarded;
 - (unsigned long long) length;
 - (id) init;


@end
