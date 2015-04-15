
@protocol NSCopying, NSSecureCoding;
@interface NSIndexPath : NSObject <NSCopying, NSSecureCoding> {

    ^Q _indexes;
    unsigned long long _length;
    ^v _reserved;
}
@property (nonatomic, assign, readonly) NSNumber* item;
@property (nonatomic, assign, readonly) NSNumber* section;
@property (nonatomic, assign, readonly) NSNumber* row;
@property (atomic, assign, readonly) NSNumber* length;
 + (id) indexPathForItem:(long long)ainSection:(long long)b;
 + (id) indexPathForRow:(long long)ainSection:(long long)b;
 + (BOOL) supportsSecureCoding;
 + (id) indexPathWithIndexes:(r^Q)alength:(unsigned long long)b;
 + (void) initialize;
 + (id) indexPath;
 + (id) indexPathWithIndex:(unsigned long long)a;

 - (long long) item;
 - (long long) row;
 - (long long) section;
 - (id) initWithIndexes:(r^Q)a length:(unsigned long long)b ;
 - (void) getIndexes:(^Q)a range:({_NSRange=QQ})b ;
 - (unsigned long long) indexAtPosition:(unsigned long long)a ;
 - (id) initWithIndex:(unsigned long long)a ;
 - (void) getIndexes:(^Q)a ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (long long) compare:(id)a ;
 - (id) indexPathByAddingIndex:(unsigned long long)a ;
 - (id) indexPathByRemovingLastIndex;
 - (unsigned long long) length;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
