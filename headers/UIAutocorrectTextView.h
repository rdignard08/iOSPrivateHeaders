
@interface UIAutocorrectTextView : UIView {

    @"NSString" m_string;
    i m_type;
    i m_edgeType;
    @"UIFont" m_textFont;
    BOOL m_animating;
    BOOL m_isLongString;
}

 - (void) dealloc;
 - (BOOL) pointInside:({CGPoint=dd})awithEvent:(id)b;
 - (BOOL) pointInside:({CGPoint=dd})aforEvent:(^{__GSEvent=})b;
 - (void) setAnimating:(BOOL)a;
 - (void) setEdgeType:(i)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _calculateRectForExpandedHitRegion;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})astring:(id)btype:(i)cedgeType:(i)d;
 - (BOOL) animating;
 - (BOOL) isLongString;
 - (void) setIsLongString:(BOOL)a;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
