
@interface UITexturedButton : UIButton {

}

 - ({CGSize=dd}) _intrinsicSizeWithinSize:({CGSize=dd})a ;
 - (void) setHighlighted:(BOOL)a ;
 - (void) setTitleColor:(id)a forStates:(unsigned long long)b ;
 - (void) setBackgroundImage:(id)a forStates:(unsigned long long)b ;
 - (void) setTitleShadowColor:(id)a forStates:(unsigned long long)b ;
 - (id) backgroundImageForState:(unsigned long long)a ;
 - (long long) buttonType;
 - (id) titleColorForState:(unsigned long long)a ;
 - (id) titleShadowColorForState:(unsigned long long)a ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
