
@protocol NSSecureCoding;
@interface BKSHIDEventRouter : NSObject <NSSecureCoding> {

    q _destination;
    @"NSSet" _hidEventDescriptors;
}
@property (atomic, assign, readonly) NSNumber* destination;
@property (atomic, assign, readonly) NSSet* hidEventDescriptors;
 + (BOOL) supportsSecureCoding;
 + (id) defaultSystemAppEventRouter;
 + (id) defaultFocusedAppEventRouter;
 + (id) routerWithDestination:(q)a;
 + (id) defaultEventRouters;

 - (id) description;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithDestination:(q)a;
 - (id) initWithDestination:(q)ahidEventDescriptors:(id)b;
 - (id) hidEventDescriptors;
 - (q) destination;
 - (id) stringForDestination:(q)a;
 - (void) addHIDEventDescriptors:(id)a;
 - (void) removeHIDEventDescriptors:(id)a;
 - (BOOL) specifiesDescriptor:(id)a;
 - (BOOL) containsDescriptor:(id)a;
 - (id) dumpContents;


@end
