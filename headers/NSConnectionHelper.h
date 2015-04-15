
@interface NSConnectionHelper : NSObject {

    d reqLim;
    d repLim;
    BOOL remoteUsesKeyedDO;
    @"NSSet" whitelist;
    BOOL useKeyedDO;
    @"NSConnection" parent;
}

 - (void) setWhitelist:(id)a;
 - (void) dealloc;
 - (void) finalize;
 - (id) init;


@end
