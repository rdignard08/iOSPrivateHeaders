
@interface _UIButtonMaskAnimationView : UIView {

    unsigned long long _hardEdge;
    UIView* _hardEdgeLine;
    UIButton* _delegate;
}

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) layoutSubviews;
 - (BOOL) _shouldAnimatePropertyWithKey:(id)a;
 - (void) setHardEdge:(unsigned long long)a;
 - (unsigned long long) hardEdge;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _frameForLine;
 - (id) init;
 - (id) delegate;
 - (void) setBorderColor:(id)a;
 - (void) animationDidStop:(id)afinished:(BOOL)b;
 - (double) borderWidth;
 - (id) borderColor;
 - (void) setBorderWidth:(double)a;


@end
