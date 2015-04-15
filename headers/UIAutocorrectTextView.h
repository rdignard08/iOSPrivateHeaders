
@interface UIAutocorrectTextView : UIView {

    NSString* m_string;
    int m_type;
    int m_edgeType;
    UIFont* m_textFont;
    BOOL m_animating;
    BOOL m_isLongString;
}

 - (void) dealloc;
 - (BOOL) pointInside:({CGPoint=dd})a withEvent:(id)b ;
 - (BOOL) pointInside:({CGPoint=dd})a forEvent:(^{__GSEvent=})b ;
 - (void) setAnimating:(BOOL)a ;
 - (void) setEdgeType:(int)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _calculateRectForExpandedHitRegion;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a string:(id)b type:(int)c edgeType:(int)d ;
 - (BOOL) animating;
 - (BOOL) isLongString;
 - (void) setIsLongString:(BOOL)a ;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
