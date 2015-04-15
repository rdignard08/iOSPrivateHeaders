
@protocol NSCopying, NSMutableCopying;
@interface FBSSceneTransitionContext : NSObject <NSCopying, NSMutableCopying> {

    BSAnimationSettings* _animationSettings;
    BSMachSendRight* _animationFencePort;
    NSSet* _actions;
    BSMutableSettings* _otherSettings;
    BSMutableSettings* _transientLocalClientSettings;
}
@property (nonatomic, copy, readwrite) BSAnimationSettings* animationSettings;
@property (nonatomic, copy, readwrite) BSMachSendRight* animationFencePort;
@property (nonatomic, copy, readwrite) NSSet* actions;
 + (id) transitionContext;

 - (BOOL) isUISubclass;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (id) animationFencePort;
 - (id) animationSettings;
 - (id) _descriptionOfSettingsWithMultilinePrefix:(id)a;
 - (void) setAnimationSettings:(id)a;
 - (void) setAnimationFencePort:(id)a;
 - (void) setActions:(id)a;
 - (id) otherSettings;
 - (id) transientLocalClientSettings;
 - (id) actions;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;
 - (id) keyDescriptionForSetting:(unsigned long long)a;
 - (id) valueDescriptionForFlag:(long long)aobject:(id)bofSetting:(unsigned long long)c;


@end
