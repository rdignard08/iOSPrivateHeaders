
@interface UINibKeyValuePair : NSObject {

    id object;
    @"NSString" keyPath;
    id value;
}
@property (nonatomic, assign, readonly) NSNumber* object;
@property (nonatomic, assign, readonly) NSString* keyPath;
@property (nonatomic, assign, readonly) NSNumber* value;

 - (id) keyPath;
 - (void) dealloc;
 - (id) object;
 - (void) applyForSimulator;
 - (void) apply;
 - (id) initWithObject:(id)akeyPath:(id)bvalue:(id)c;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) value;


@end
