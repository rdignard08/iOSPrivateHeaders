
@protocol NSCoding;
@interface _UITraitStorageList : NSObject <NSCoding> {

    id _topLevelObject;
    NSArray* _traitStorages;
    NSSet* _descendants;
}
@property (nonatomic, weak, readonly) NSNumber* topLevelObject;
@property (nonatomic, assign, readonly) NSArray* traitStorages;
@property (nonatomic, assign, readonly) NSSet* descendants;

 - (void) dealloc;
 - (id) traitStorages;
 - (id) initWithTopLevelObject:(id)a traitStorages:(id)b descendants:(id)c ;
 - (id) topLevelObject;
 - (id) descendants;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
