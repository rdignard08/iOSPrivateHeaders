
@protocol UICalloutBarDelegate;
@interface UIMenuController : NSObject <UICalloutBarDelegate> {

    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _targetRect;
    long long _arrowDirection;
}
@property (nonatomic, assign, readwrite, isMenuVisible) NSNumber* menuVisible;
@property (nonatomic, assign, readwrite) NSNumber* arrowDirection;
@property (nonatomic, copy, readwrite) NSArray* menuItems;
@property (nonatomic, assign, readonly) NSNumber* menuFrame;
 + (id) sharedMenuController;

 - (void) dealloc;
 - (void) _setTargetRect:({CGRect={CGPoint=dd}{CGSize=dd}})ainView:(id)banimated:(BOOL)c;
 - (BOOL) isMenuVisible;
 - (void) setMenuVisible:(BOOL)aanimated:(BOOL)b;
 - (void) setTargetRect:({CGRect={CGPoint=dd}{CGSize=dd}})ainView:(id)b;
 - (long long) arrowDirection;
 - (void) setArrowDirection:(long long)a;
 - (void) calloutBar:(id)awillStartAnimation:(id)b;
 - (void) calloutBar:(id)adidFinishAnimation:(id)b;
 - (BOOL) _updateAnimated:(BOOL)acheckVisible:(BOOL)b;
 - (void) _windowWillRotate:(id)a;
 - (BOOL) _menuHidden;
 - (void) setMenuVisible:(BOOL)a;
 - (void) setMenuItems:(id)a;
 - (id) menuItems;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) menuFrame;
 - (id) init;
 - (void) update;


@end
