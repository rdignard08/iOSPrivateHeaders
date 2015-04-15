
@interface UIInputViewTransition : NSObject {

    @"UIInputViewSet" oldSet;
    @"UIInputViewSet" newSet;
    @"UIInputViewAnimationStyle" animationStyle;
    BOOL cancelled;
    int animationState;
    double animationStartTime;
    BOOL skipNotifications;
    BOOL skipFencing;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} beginFrame;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} endFrame;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} beginFrameScreen;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} endFrameScreen;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} beginFloatingFrame;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} endFloatingFrame;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} beginFloatingFrameScreen;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} endFloatingFrameScreen;
    int activeClippingModes;
    @"UISnapshotView" snapshotView;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} snapshotViewBeginFrame;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} snapshotViewEndFrame;
}
@property (nonatomic, retain, readwrite) UIInputViewSet* oldSet;
@property (nonatomic, retain, readwrite) UISnapshotView* snapshotView;
@property (nonatomic, assign, readwrite) NSNumber* snapshotViewBeginFrame;
@property (nonatomic, assign, readwrite) NSNumber* snapshotViewEndFrame;
@property (nonatomic, retain, readwrite) UIInputViewAnimationStyle* animationStyle;
@property (nonatomic, assign, readwrite) NSNumber* cancelled;
@property (nonatomic, assign, readwrite) NSNumber* animationState;
@property (nonatomic, assign, readwrite) NSNumber* animationStartTime;
@property (nonatomic, assign, readwrite) NSNumber* skipNotifications;
@property (nonatomic, assign, readwrite) NSNumber* skipFencing;
@property (nonatomic, assign, readwrite) NSNumber* beginFrame;
@property (nonatomic, assign, readwrite) NSNumber* endFrame;
@property (nonatomic, assign, readwrite) NSNumber* beginFrameScreen;
@property (nonatomic, assign, readwrite) NSNumber* endFrameScreen;
@property (nonatomic, assign, readwrite) NSNumber* beginFloatingFrame;
@property (nonatomic, assign, readwrite) NSNumber* endFloatingFrame;
@property (nonatomic, assign, readwrite) NSNumber* beginFloatingFrameScreen;
@property (nonatomic, assign, readwrite) NSNumber* endFloatingFrameScreen;
@property (nonatomic, assign, readonly) NSNumber* ignoreFrameChanges;
@property (nonatomic, assign, readwrite) NSNumber* activeClippingModes;
@property (nonatomic, assign, readonly) NSNumber* beginState;
@property (nonatomic, assign, readonly) NSNumber* transitioningState;
@property (nonatomic, assign, readonly) NSNumber* endState;
@property (nonatomic, assign, readonly) NSNumber* cancelState;
@property (nonatomic, assign, readonly) NSNumber* deprecatedBounds;
@property (nonatomic, assign, readonly) NSNumber* deprecatedCenterBegin;
@property (nonatomic, assign, readonly) NSNumber* deprecatedCenterEnd;

 - (BOOL) cancelled;
 - (id) description;
 - (void) dealloc;
 - (id) snapshotView;
 - (void) setAnimationStartTime:(double)a;
 - (void) setCancelled:(BOOL)a;
 - (void) setEndFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) isOnScreen;
 - (BOOL) shouldCompleteOnSuspend;
 - (id) animationStyle;
 - (BOOL) skipFencing;
 - (BOOL) ignoreFrameChanges;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) endFrameScreen;
 - (int) animationState;
 - (BOOL) shouldRecomputeEndFrame;
 - (id) oldSet;
 - (id) newSet;
 - (void) setEndFrameScreen:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) beginFrame;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) snapshotViewBeginFrame;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) snapshotViewEndFrame;
 - (int) activeClippingModes;
 - (BOOL) fadeAccessoryView;
 - (BOOL) requiresAutomaticAppearanceEnabled;
 - (int) endState;
 - (BOOL) subsumesTransition:(id)a;
 - (void) postNotificationsForTransitionEnd;
 - (void) postNotificationsForTransitionStart;
 - (void) setActiveClippingModes:(int)a;
 - (void) setAnimationState:(int)a;
 - (int) transitioningState;
 - (int) cancelState;
 - (void) setOldSet:(id)a;
 - (void) setNewSet:(id)a;
 - (void) setBeginFrameScreen:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setAnimationStyle:(id)a;
 - (void) setBeginFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setSkipNotifications:(BOOL)a;
 - (void) setSkipFencing:(BOOL)a;
 - (void) setBeginFloatingFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setEndFloatingFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBeginFloatingFrameScreen:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setEndFloatingFrameScreen:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) beginFrameScreen;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) beginFloatingFrame;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) endFloatingFrame;
 - (BOOL) isAccessoryViewChangedOnly;
 - (void) setSnapshotView:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) deprecatedBounds;
 - ({CGPoint=dd}) deprecatedCenterBegin;
 - ({CGPoint=dd}) deprecatedCenterEnd;
 - (BOOL) skipNotifications;
 - (id) userInfoForTransition;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) beginFloatingFrameScreen;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) endFloatingFrameScreen;
 - (BOOL) isAlmostDone;
 - (double) animationStartTime;
 - (int) beginState;
 - (void) setSnapshotViewBeginFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setSnapshotViewEndFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) endFrame;


@end
