
@interface _UIButtonMaskAnimationView : UIView {

    Q _hardEdge;
    @"UIView" _hardEdgeLine;
    @"UIButton" _delegate;
}

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) layoutSubviews;
 - (BOOL) _shouldAnimatePropertyWithKey:(id)a;
 - (void) setHardEdge:(Q)a;
 - (Q) hardEdge;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _frameForLine;
 - (id) init;
 - (id) delegate;
 - (void) setBorderColor:(id)a;
 - (void) animationDidStop:(id)afinished:(BOOL)b;
 - (d) borderWidth;
 - (id) borderColor;
 - (void) setBorderWidth:(d)a;


@end
