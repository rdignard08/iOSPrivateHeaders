
@protocol UIKBHandwritingStrokeEnabled;
@interface UIKBHandwritingStrokeView : UIView <UIKBHandwritingStrokeEnabled> {

    UIKBHandwritingView* _keyView;
}

 - (void) dealloc;
 - (double) inkWidth;
 - (id) keyView;
 - (void) setKeyView:(id)a ;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
