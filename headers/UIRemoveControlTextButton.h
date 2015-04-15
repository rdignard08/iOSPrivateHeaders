
@interface UIRemoveControlTextButton : UIControl {

    NSString* _label;
}

 - (void) dealloc;
 - (void) sizeToFit;
 - (BOOL) _alwaysHandleScrollerMouseEvent;
 - (id) _scriptingInfo;
 - (void) _controlTouchBegan:(id)a withEvent:(id)b ;
 - (void) _controlTouchMoved:(id)a withEvent:(id)b ;
 - (void) _controlTouchEnded:(id)a withEvent:(id)b ;
 - (float) buttonWidth;
 - (id) initWithRemoveControl:(id)a withTarget:(id)b withLabel:(id)c ;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
