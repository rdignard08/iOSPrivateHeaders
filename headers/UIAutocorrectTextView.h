
@interface UIAutocorrectTextView : UIView {

    NSString* m_string;
    int m_type;
    int m_edgeType;
    UIFont* m_textFont;
    BOOL m_animating;
    BOOL m_isLongString;
}

 - (void) dealloc;
 - (BOOL) pointInside:({CGPoint=dd})awithEvent:(id)b;
 - (BOOL) pointInside:({CGPoint=dd})aforEvent:(^{__GSEvent=})b;
 - (void) setAnimating:(BOOL)a;
 - (void) setEdgeType:(int)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _calculateRectForExpandedHitRegion;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})astring:(id)btype:(int)cedgeType:(int)d;
 - (BOOL) animating;
 - (BOOL) isLongString;
 - (void) setIsLongString:(BOOL)a;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
