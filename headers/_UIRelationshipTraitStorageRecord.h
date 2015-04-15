
@protocol NSCoding;
@interface _UIRelationshipTraitStorageRecord : NSObject <NSCoding> {

    @"UITraitCollection" _traitCollection;
    @"NSSet" _addedObjects;
    @"NSSet" _removedObjects;
}
@property (nonatomic, assign, readonly) UITraitCollection* traitCollection;
@property (nonatomic, assign, readonly) NSSet* addedObjects;
@property (nonatomic, assign, readonly) NSSet* removedObjects;

 - (void) dealloc;
 - (id) traitCollection;
 - (id) initWithTraitCollection:(id)aaddedObjects:(id)bremovedObjects:(id)c;
 - (id) addedObjects;
 - (id) removedObjects;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
