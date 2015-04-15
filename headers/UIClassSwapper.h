
@interface UIClassSwapper : NSObject {

    NSString* className;
    id object;
}
 + (id) swapperForObject:(id)awithClassName:(id)b;

 - (void) dealloc;
 - (id) object;
 - (id) initWithObject:(id)aandClassName:(id)b;
 - (id) className;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
