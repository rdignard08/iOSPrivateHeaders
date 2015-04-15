
@protocol NSSecureCoding;
@interface BKSHIDEventRouter : NSObject <NSSecureCoding> {

    long long _destination;
    @"NSSet" _hidEventDescriptors;
}
@property (atomic, assign, readonly) NSNumber* destination;
@property (atomic, assign, readonly) NSSet* hidEventDescriptors;
 + (BOOL) supportsSecureCoding;
 + (id) defaultSystemAppEventRouter;
 + (id) defaultFocusedAppEventRouter;
 + (id) routerWithDestination:(long long)a;
 + (id) defaultEventRouters;

 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithDestination:(long long)a;
 - (id) initWithDestination:(long long)ahidEventDescriptors:(id)b;
 - (id) hidEventDescriptors;
 - (long long) destination;
 - (id) stringForDestination:(long long)a;
 - (void) addHIDEventDescriptors:(id)a;
 - (void) removeHIDEventDescriptors:(id)a;
 - (BOOL) specifiesDescriptor:(id)a;
 - (BOOL) containsDescriptor:(id)a;
 - (id) dumpContents;


@end
