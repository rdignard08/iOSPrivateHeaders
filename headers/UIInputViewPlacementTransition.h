
@interface UIInputViewPlacementTransition : NSObject {

    BOOL cancelled;
    i animationState;
    @"UIInputViewSetPlacement" fromPlacement;
    @"UIInputViewSetPlacement" toPlacement;
    @"UIInputViewAnimationStyle" animationStyle;
    @"UIInputViewSetNotificationInfo" notificationInfo;
    Q notifications;
    @"<NSObject>" animationContext;
    @"<UIInputViewAnimationController>" animationController;
}
@property (nonatomic, retain, readwrite) UIInputViewSetPlacement* fromPlacement;
@property (nonatomic, retain, readwrite) UIInputViewSetPlacement* toPlacement;
@property (nonatomic, retain, readwrite) UIInputViewAnimationStyle* animationStyle;
@property (nonatomic, retain, readwrite) UIInputViewSetNotificationInfo* notificationInfo;
@property (nonatomic, assign, readwrite) NSNumber* notifications;
@property (nonatomic, assign, readwrite) NSNumber* animationState;
@property (nonatomic, retain, readwrite) NSNumber* animationController;
@property (nonatomic, retain, readwrite) NSNumber* animationContext;
@property (nonatomic, assign, readwrite) NSNumber* cancelled;
 + (id) transitionFromPlacement:(id)atoPlacement:(id)bwithAnimationStyle:(id)c;

 - (BOOL) cancelled;
 - (void) dealloc;
 - (void) setAnimationController:(id)a;
 - (id) animationController;
 - (void) setCancelled:(BOOL)a;
 - (id) animationStyle;
 - (i) animationState;
 - (void) setAnimationState:(i)a;
 - (void) setAnimationStyle:(id)a;
 - (void) setFromPlacement:(id)a;
 - (void) setToPlacement:(id)a;
 - (id) fromPlacement;
 - (id) toPlacement;
 - (BOOL) didAdvanceAnimationToState:(i)a;
 - (id) notificationInfo;
 - (void) setNotificationInfo:(id)a;
 - (Q) notifications;
 - (void) setNotifications:(Q)a;
 - (id) animationContext;
 - (void) setAnimationContext:(id)a;


@end
