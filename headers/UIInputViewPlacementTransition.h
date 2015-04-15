
@interface UIInputViewPlacementTransition : NSObject {

    BOOL cancelled;
    int animationState;
    @"UIInputViewSetPlacement" fromPlacement;
    @"UIInputViewSetPlacement" toPlacement;
    @"UIInputViewAnimationStyle" animationStyle;
    @"UIInputViewSetNotificationInfo" notificationInfo;
    unsigned long long notifications;
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
 - (int) animationState;
 - (void) setAnimationState:(int)a;
 - (void) setAnimationStyle:(id)a;
 - (void) setFromPlacement:(id)a;
 - (void) setToPlacement:(id)a;
 - (id) fromPlacement;
 - (id) toPlacement;
 - (BOOL) didAdvanceAnimationToState:(int)a;
 - (id) notificationInfo;
 - (void) setNotificationInfo:(id)a;
 - (unsigned long long) notifications;
 - (void) setNotifications:(unsigned long long)a;
 - (id) animationContext;
 - (void) setAnimationContext:(id)a;


@end
