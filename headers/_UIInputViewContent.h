
@interface _UIInputViewContent : UIView {

    double _contentHeight;
    double _contentWidth;
    UIInputView _inputView;
    int _unclippableCorners;
}

 - ({CGSize=dd}) _contentSize;
 - (BOOL) _isToolbar;
 - ({CGSize=dd}) _sizeFittingContentViews;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})ainputView:(id)b;
 - (void) _setToolbarBackgroundImage:(id)a;
 - (void) _setToolbarBackgroundViewWithImage:(id)a;
 - (void) _updateCornerClipping;
 - (int) _unclippableCorners;
 - (void) set_unclippableCorners:(int)a;
 - (void) addSubview:(id)a;


@end
