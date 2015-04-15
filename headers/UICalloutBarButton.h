
@interface UICalloutBarButton : UIButton {

    SEL m_action;
    i m_position;
    i m_type;
    @"UITextReplacement" m_textReplacement;
    d m_contentWidth;
    d m_contentScale;
    d m_additionalContentHeight;
    d m_dividerOffset;
    d m_imageVerticalAdjust;
    q m_page;
    BOOL m_isText;
    BOOL m_configured;
    BOOL m_single;
    BOOL m_padLeft;
    BOOL m_padRight;
    BOOL m_dontDismiss;
    BOOL forceFlash;
}
 + (id) buttonWithTitle:(id)asubtitle:(id)bmaxWidth:(d)caction:(SEL)dtype:(i)einView:(id)f;
 + (id) buttonWithTitle:(id)aaction:(SEL)btype:(i)cinView:(id)d;
 + (id) buttonWithImage:(id)aaction:(SEL)btype:(i)cinView:(id)d;

 - (void) dealloc;
 - (void) layoutSubviews;
 - (SEL) action;
 - (void) setHighlighted:(BOOL)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) titleRectForContentRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setDontDismiss:(BOOL)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) imageRectForContentRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setupWithTitle:(id)asubtitle:(id)bmaxWidth:(d)caction:(SEL)dtype:(i)e;
 - (void) setupWithTitle:(id)aaction:(SEL)btype:(i)c;
 - (void) setupWithImage:(id)aaction:(SEL)btype:(i)c;
 - (void) flash;
 - (void) _commonSetupWithAction:(SEL)atype:(i)b;
 - (void) cancelFlash;
 - (void) configureLabel;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) adjustRectForPosition:({CGRect={CGPoint=dd}{CGSize=dd}})ascaleRect:(BOOL)b;
 - (BOOL) forceFlash;
 - (void) setForceFlash:(BOOL)a;
 - (void) fadeAndSendAction;
 - (void) configureForSingle:(i)a;
 - (void) configureForLeftPosition:(i)a;
 - (void) configureForMiddlePosition;
 - (void) configureForRightPosition:(i)a;
 - (void) setContentScale:(d)a;
 - (d) contentScale;
 - (d) additionalContentHeight;
 - (id) textReplacement;
 - (void) setTextReplacement:(id)a;
 - (void) setPage:(q)a;
 - (d) dividerOffset;
 - (void) setDividerOffset:(d)a;
 - (d) imageVerticalAdjust;
 - (void) setImageVerticalAdjust:(d)a;
 - (BOOL) dontDismiss;
 - (i) type;
 - (d) contentWidth;
 - (void) removeFromSuperview;
 - (q) page;


@end
