
@interface FBSScene : NSObject {

}
@property (nonatomic, copy, readonly) NSString* identifier;
@property (nonatomic, assign, readonly) CADisplay* display;
@property (nonatomic, retain, readonly) FBSDisplay* fbsDisplay;
@property (nonatomic, assign, readwrite) NSNumber* delegate;
@property (nonatomic, retain, readonly) FBSSceneSettings* settings;
@property (nonatomic, retain, readonly) FBSSceneClientSettings* clientSettings;
@property (nonatomic, retain, readonly) NSArray* contexts;

 - (void) updateUIClientSettingsWithBlock:(@?)a ;
 - (id) _init;
 - (void) invalidate;
 - (void) setDelegate:(id)a ;
 - (id) fbsDisplay;
 - (id) settings;
 - (void) attachContext:(id)a ;
 - (void) detachContext:(id)a ;
 - (void) updateClientSettingsWithBlock:(@?)a ;
 - (id) init;
 - (id) delegate;
 - (id) identifier;
 - (id) initWithQueue:(id)a identifier:(id)b display:(id)c settings:(id)d clientSettings:(id)e ;
 - (id) clientSettings;
 - (id) contexts;
 - (void) updateClientSettings:(id)a withTransitionContext:(id)b ;
 - (void) attachSceneContext:(id)a ;
 - (void) detachSceneContext:(id)a ;
 - (id) _descriptionWithMultilinePrefix:(id)a ;
 - (void) sendActions:(id)a ;
 - (id) display;


@end
