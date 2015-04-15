
@interface _UIVisualEffectContentView : _UIVisualEffectSubview {

    BOOL _autosetSubviewLabelTintColor;
}

 - (void) willMoveToWindow:(id)a;
 - (void) _descendent:(id)awillMoveFromSuperview:(id)btoSuperview:(id)c;
 - (void) _setLayerConfig:(id)a;
 - (void) adjustLabelColorForView:(id)aisInContentView:(BOOL)b;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
