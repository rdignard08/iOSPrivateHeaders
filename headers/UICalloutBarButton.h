
@interface UICalloutBarButton : UIButton {

    SEL m_action;
    int m_position;
    int m_type;
    UITextReplacement* m_textReplacement;
    double m_contentWidth;
    double m_contentScale;
    double m_additionalContentHeight;
    double m_dividerOffset;
    double m_imageVerticalAdjust;
    long long m_page;
    BOOL m_isText;
    BOOL m_configured;
    BOOL m_single;
    BOOL m_padLeft;
    BOOL m_padRight;
    BOOL m_dontDismiss;
    BOOL forceFlash;
}
 + (id) buttonWithTitle:(id)asubtitle:(id)bmaxWidth:(double)caction:(SEL)dtype:(int)einView:(id)f;
 + (id) buttonWithTitle:(id)aaction:(SEL)btype:(int)cinView:(id)d;
 + (id) buttonWithImage:(id)aaction:(SEL)btype:(int)cinView:(id)d;

 - (void) dealloc;
 - (void) layoutSubviews;
 - (SEL) action;
 - (void) setHighlighted:(BOOL)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) titleRectForContentRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setDontDismiss:(BOOL)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) imageRectForContentRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setupWithTitle:(id)a subtitle:(id)b maxWidth:(double)c action:(SEL)d type:(int)e ;
 - (void) setupWithTitle:(id)a action:(SEL)b type:(int)c ;
 - (void) setupWithImage:(id)a action:(SEL)b type:(int)c ;
 - (void) flash;
 - (void) _commonSetupWithAction:(SEL)a type:(int)b ;
 - (void) cancelFlash;
 - (void) configureLabel;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) adjustRectForPosition:({CGRect={CGPoint=dd}{CGSize=dd}})a scaleRect:(BOOL)b ;
 - (BOOL) forceFlash;
 - (void) setForceFlash:(BOOL)a ;
 - (void) fadeAndSendAction;
 - (void) configureForSingle:(int)a ;
 - (void) configureForLeftPosition:(int)a ;
 - (void) configureForMiddlePosition;
 - (void) configureForRightPosition:(int)a ;
 - (void) setContentScale:(double)a ;
 - (double) contentScale;
 - (double) additionalContentHeight;
 - (id) textReplacement;
 - (void) setTextReplacement:(id)a ;
 - (void) setPage:(long long)a ;
 - (double) dividerOffset;
 - (void) setDividerOffset:(double)a ;
 - (double) imageVerticalAdjust;
 - (void) setImageVerticalAdjust:(double)a ;
 - (BOOL) dontDismiss;
 - (int) type;
 - (double) contentWidth;
 - (void) removeFromSuperview;
 - (long long) page;


@end
