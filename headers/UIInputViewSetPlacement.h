
@interface UIInputViewSetPlacement : NSObject {

    double _extendedHeight;
}
@property (nonatomic, assign, readonly) NSNumber* showsInputViews;
@property (nonatomic, assign, readonly) NSNumber* showsKeyboard;
@property (nonatomic, assign, readonly) NSNumber* isUndocked;
@property (nonatomic, assign, readonly) NSNumber* isInteractive;
@property (nonatomic, assign, readwrite) NSNumber* extendedHeight;
 + (id) placement;

 - (BOOL) isEqual:(id)a;
 - (BOOL) isInteractive;
 - (BOOL) showsInputViews;
 - (BOOL) inputViewWillAppear;
 - (BOOL) isUndocked;
 - (BOOL) showsKeyboard;
 - (id) horizontalConstraintForInputViewSet:(id)ahostView:(id)bcontainerView:(id)c;
 - (id) verticalConstraintForInputViewSet:(id)ahostView:(id)bcontainerView:(id)c;
 - (unsigned long long) notificationsForTransitionToPlacement:(id)a;
 - (BOOL) accessoryViewWillAppear;
 - (double) extendedHeight;
 - (void) setExtendedHeight:(double)a;


@end
