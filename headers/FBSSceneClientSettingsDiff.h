
@protocol BSXPCCoding;
@interface FBSSceneClientSettingsDiff : NSObject <BSXPCCoding> {

    BSMutableSettings _changes;
}
 + (id) diffFromSettings:(id)atoSettings:(id)b;

 - (id) description;
 - (void) dealloc;
 - (id) init;
 - (id) _initWithChanges:(id)a;
 - (void) inspectChangesWithBlock:(@?)a;
 - (id) settingsByApplyingToMutableCopyOfSettings:(id)a;
 - (void) inspectOtherChangesWithBlock:(@?)a;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;


@end
