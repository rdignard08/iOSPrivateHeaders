
@protocol UICalloutBarDelegate;
@interface UIMenuController : NSObject <UICalloutBarDelegate> {

    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _targetRect;
    long long _arrowDirection;
}
@property (nonatomic, assign, readwrite, getter=isMenuVisible) NSNumber* menuVisible;
@property (nonatomic, assign, readwrite) NSNumber* arrowDirection;
@property (nonatomic, copy, readwrite) NSArray* menuItems;
@property (nonatomic, assign, readonly) NSNumber* menuFrame;
 + (id) sharedMenuController;

 - (void) dealloc;
 - (void) _setTargetRect:({CGRect={CGPoint=dd}{CGSize=dd}})a inView:(id)b animated:(BOOL)c ;
 - (BOOL) isMenuVisible;
 - (void) setMenuVisible:(BOOL)a animated:(BOOL)b ;
 - (void) setTargetRect:({CGRect={CGPoint=dd}{CGSize=dd}})a inView:(id)b ;
 - (long long) arrowDirection;
 - (void) setArrowDirection:(long long)a ;
 - (void) calloutBar:(id)a willStartAnimation:(id)b ;
 - (void) calloutBar:(id)a didFinishAnimation:(id)b ;
 - (BOOL) _updateAnimated:(BOOL)a checkVisible:(BOOL)b ;
 - (void) _windowWillRotate:(id)a ;
 - (BOOL) _menuHidden;
 - (void) setMenuVisible:(BOOL)a ;
 - (void) setMenuItems:(id)a ;
 - (id) menuItems;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) menuFrame;
 - (id) init;
 - (void) update;


@end
