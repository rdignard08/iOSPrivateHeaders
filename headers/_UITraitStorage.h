
@protocol NSCoding;
@interface _UITraitStorage : NSObject <NSCoding> {

    NSMutableArray* _records;
    id _object;
    NSString* _keyPath;
}
@property (nonatomic, assign, readonly) NSString* keyPath;
@property (nonatomic, weak, readonly) NSNumber* object;

 - (id) keyPath;
 - (void) dealloc;
 - (id) object;
 - (void) applyRecordsMatchingTraitCollection:(id)a ;
 - (id) initWithObject:(id)a keyPath:(id)b ;
 - (id) records;
 - (void) addRecord:(id)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
