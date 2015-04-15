
@protocol NSCopying, NSSecureCoding;
@interface NSIndexPath : NSObject <NSCopying, NSSecureCoding> {

    ^Q _indexes;
    Q _length;
    ^v _reserved;
}
@property (nonatomic, assign, readonly) NSNumber* item;
@property (nonatomic, assign, readonly) NSNumber* section;
@property (nonatomic, assign, readonly) NSNumber* row;
@property (atomic, assign, readonly) NSNumber* length;
 + (id) indexPathForItem:(q)ainSection:(q)b;
 + (id) indexPathForRow:(q)ainSection:(q)b;
 + (BOOL) supportsSecureCoding;
 + (id) indexPathWithIndexes:(r^Q)alength:(Q)b;
 + (void) initialize;
 + (id) indexPath;
 + (id) indexPathWithIndex:(Q)a;

 - (q) item;
 - (q) row;
 - (q) section;
 - (id) initWithIndexes:(r^Q)alength:(Q)b;
 - (void) getIndexes:(^Q)arange:({_NSRange=QQ})b;
 - (Q) indexAtPosition:(Q)a;
 - (id) initWithIndex:(Q)a;
 - (void) getIndexes:(^Q)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (q) compare:(id)a;
 - (id) indexPathByAddingIndex:(Q)a;
 - (id) indexPathByRemovingLastIndex;
 - (Q) length;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
