
@interface UIKeyboardCandidateUnsplitKeyboardToggleButton : UIKeyboardCandidateToggleButton {

    UIKeyboardCandidatePocketShadow _pocketShadow;
    UIImage _backgroundNormal;
    UIImage _backgroundHighlighted;
    BOOL _drawsBackground;
    BOOL _drawsPocketShadow;
}

 - (void) dealloc;
 - (void) setHighlighted:(BOOL)a;
 - (void) setSelected:(BOOL)a;
 - (void) setDrawsPocketShadow:(BOOL)a;
 - (void) updateBackgroundImages;
 - (id) toggleButtonBackgroundImageWithHighlight:(BOOL)a;
 - (BOOL) drawsPocketShadow;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) drawsBackground;
 - (void) setDrawsBackground:(BOOL)a;


@end
