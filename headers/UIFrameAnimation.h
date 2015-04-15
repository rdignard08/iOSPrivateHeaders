
@interface UIFrameAnimation : UIAnimation {

    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _startFrame;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _endFrame;
    int _fieldsToChange;
}

 - (id) initWithTarget:(id)a ;
 - (void) setProgress:(float)a ;
 - (void) setStartFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setEndFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setSignificantRectFields:(int)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) endFrame;


@end
