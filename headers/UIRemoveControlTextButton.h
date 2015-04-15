
@interface UIRemoveControlTextButton : UIControl {

    @"NSString" _label;
}

 - (void) dealloc;
 - (void) sizeToFit;
 - (BOOL) _alwaysHandleScrollerMouseEvent;
 - (id) _scriptingInfo;
 - (void) _controlTouchBegan:(id)awithEvent:(id)b;
 - (void) _controlTouchMoved:(id)awithEvent:(id)b;
 - (void) _controlTouchEnded:(id)awithEvent:(id)b;
 - (f) buttonWidth;
 - (id) initWithRemoveControl:(id)awithTarget:(id)bwithLabel:(id)c;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
