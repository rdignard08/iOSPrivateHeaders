
@interface _UIInputViewContent : UIView {

    d _contentHeight;
    d _contentWidth;
    @"UIInputView" _inputView;
    i _unclippableCorners;
}

 - ({CGSize=dd}) _contentSize;
 - (BOOL) _isToolbar;
 - ({CGSize=dd}) _sizeFittingContentViews;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})ainputView:(id)b;
 - (void) _setToolbarBackgroundImage:(id)a;
 - (void) _setToolbarBackgroundViewWithImage:(id)a;
 - (void) _updateCornerClipping;
 - (i) _unclippableCorners;
 - (void) set_unclippableCorners:(i)a;
 - (void) addSubview:(id)a;


@end
