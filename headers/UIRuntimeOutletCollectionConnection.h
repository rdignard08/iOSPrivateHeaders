
@interface UIRuntimeOutletCollectionConnection : UIRuntimeConnection {

    NSString* runtimeCollectionClassName;
    BOOL addsContentToExistingCollection;
}

 - (id) description;
 - (void) dealloc;
 - (void) connectForSimulator;
 - (id) runtimeCollectionClassName;
 - (void) performConnect;
 - (void) setRuntimeCollectionClassName:(id)a ;
 - (BOOL) addsContentToExistingCollection;
 - (void) setAddsContentToExistingCollection:(BOOL)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (void) connect;


@end
