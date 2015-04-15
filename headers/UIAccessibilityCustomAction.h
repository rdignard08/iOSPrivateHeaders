
@interface UIAccessibilityCustomAction : NSObject {

    id _weakTarget;
    NSString* _name;
    SEL _selector;
}
@property (nonatomic, copy, readwrite) NSString* name;
@property (nonatomic, weak, readwrite) NSNumber* target;
@property (nonatomic, assign, readwrite) NSNumber* selector;

 - (id) target;
 - (SEL) selector;
 - (void) dealloc;
 - (id) name;
 - (void) setTarget:(id)a ;
 - (id) initWithName:(id)a target:(id)b selector:(SEL)c ;
 - (void) setSelector:(SEL)a ;
 - (void) setName:(id)a ;


@end
