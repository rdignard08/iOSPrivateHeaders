
@interface BKSHIDEventRouterManagerBase : NSObject {

    @"NSArray" _eventRouters;
}
@property (nonatomic, retain, readwrite) NSArray* eventRouters;

 - (id) description;
 - (id) init;
 - (void) setEventRouters:(id)a;
 - (id) eventRouters;
 - (q) routerDestinationForDescriptor:(id)a;


@end
