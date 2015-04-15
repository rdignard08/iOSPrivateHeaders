
@protocol NSCoding;
@interface UILayoutContainerView : UIView <NSCoding> {

    id _delegate;
    BOOL _usesRoundedCorners;
    double _cornerRadius;
    BOOL _usesInnerShadow;
    BOOL _shadowViewsInstalled;
    UIView _shadowView;
    BOOL _forwardMoveToWindowCallbacks;
}

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) didMoveToWindow;
 - (void) layoutSubviews;
 - (void) willMoveToWindow:(id)a;
 - (void) setUsesRoundedCorners:(BOOL)a;
 - (void) setUsesInnerShadow:(BOOL)a;
 - (BOOL) forwardMoveToWindowCallbacks;
 - (void) _installShadowViews;
 - (void) _tearDownShadowViews;
 - (BOOL) usesRoundedCorners;
 - (BOOL) usesInnerShadow;
 - (void) setForwardMoveToWindowCallbacks:(BOOL)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) delegate;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) addSubview:(id)a;


@end
