
@interface CPPowerAssertionManager : NSObject {

    @"NSString" _uuid;
    @"NSCountedSet" _contexts;
    @"NSMutableDictionary" _groupIdentifierToContexts;
    ^{__CFDictionary=} _contextToGroupIdentifier;
    @"NSMutableSet" _heldAsideGroupIdentifiers;
    @"NSCountedSet" _heldAsideContexts;
    @"<CPPowerAssertionManagerDelegate>" _delegate;
}
@property (atomic, assign, readonly) NSString* uuid;
@property (atomic, assign, readwrite) NSNumber* delegate;
 + (id) sharedInstance;

 - (id) description;
 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (id) init;
 - (id) delegate;
 - (id) uuid;
 - (void) retainPowerAssertionWithContext:(id)awithGroupIdentifier:(id)b;
 - (void) _retainAssertions;
 - (void) _releaseAssertions;
 - (Q) retainCountForContext:(id)a;
 - (void) setUUIDPrefix:(id)a;
 - (void) retainPowerAssertionWithContext:(id)a;
 - (void) releasePowerAssertionWithContext:(id)a;
 - (void) temporarilyReleasePowerAssertionsForGroupIdentifier:(id)a;
 - (void) reretainPowerAssertionsForGroupIdentifier:(id)a;


@end
