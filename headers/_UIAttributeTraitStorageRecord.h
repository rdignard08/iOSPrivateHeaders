
@protocol NSCoding;
@interface _UIAttributeTraitStorageRecord : NSObject <NSCoding> {

    UITraitCollection* _traitCollection;
    id _value;
}
@property (nonatomic, assign, readonly) UITraitCollection* traitCollection;
@property (nonatomic, assign, readonly) NSNumber* value;

 - (void) dealloc;
 - (id) traitCollection;
 - (id) initWithTraitCollection:(id)a value:(id)b ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) value;


@end
