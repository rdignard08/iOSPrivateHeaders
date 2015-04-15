
@interface UINavBarPrompt : UIView {

    @"UILabel" _label;
    @"UINavigationBar" _navBar;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (id) prompt;
 - (void) setPrompt:(id)a;
 - (void) clearWeakReference:(id)a;
 - (id) initWithPrompt:(id)anavBar:(id)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) promptBounds;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _labelFrame;
 - ({CGSize=dd}) _updateLabelTextColorAndFontReturningShadowOffset;
 - ({CGSize=dd}) _updateLabelTextColorAndFontReturningShadowOffset_legacy;


@end
