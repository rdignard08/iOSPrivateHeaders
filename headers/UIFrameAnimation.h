
@interface UIFrameAnimation : UIAnimation {

    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _startFrame;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _endFrame;
    i _fieldsToChange;
}

 - (id) initWithTarget:(id)a;
 - (void) setProgress:(f)a;
 - (void) setStartFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setEndFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setSignificantRectFields:(i)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) endFrame;


@end
