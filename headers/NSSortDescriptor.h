
@protocol NSSecureCoding, NSCopying;
@interface NSSortDescriptor : NSObject <NSSecureCoding, NSCopying> {

    unsigned long long _sortDescriptorFlags;
    NSString _key;
    SEL _selector;
    id _selectorOrBlock;
}
@property (atomic, copy, readonly) NSString* key;
@property (atomic, assign, readonly) NSNumber* ascending;
@property (atomic, assign, readonly) NSNumber* selector;
@property (atomic, assign, readonly) NSNumber* comparator;
@property (atomic, retain, readonly) NSNumber* reversedSortDescriptor;
 + (BOOL) supportsSecureCoding;
 + (id) sortDescriptorWithKey:(id)aascending:(BOOL)bselector:(SEL)c;
 + (id) sortDescriptorWithKey:(id)aascending:(BOOL)bcomparator:(@?)c;
 + (id) _defaultSelectorName;
 + (void) initialize;
 + (id) sortDescriptorWithKey:(id)aascending:(BOOL)b;

 - (long long) compareObject:(id)atoObject:(id)b;
 - (id) initWithKey:(id)aascending:(BOOL)bselector:(SEL)c;
 - (id) initWithKey:(id)aascending:(BOOL)bcomparator:(@?)c;
 - (id) _selectorName;
 - (id) initWithKey:(id)aascending:(BOOL)b;
 - (void) _setSelectorName:(id)a;
 - (void) _disallowEvaluation;
 - (BOOL) _isEqualToSortDescriptor:(id)a;
 - (void) allowEvaluation;
 - (void) _setKey:(id)a;
 - (void) _setAscending:(BOOL)a;
 - (id) reversedSortDescriptor;
 - (id) replacementObjectForPortCoder:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (SEL) selector;
 - (id) description;
 - (void) dealloc;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (@?) comparator;
 - (id) key;
 - (BOOL) ascending;


@end
