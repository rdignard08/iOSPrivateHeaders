
@interface _UIAttributedStringView : UIView {

    NSAttributedString _string;
}
 + (Class) layerClass;

 - (void) dealloc;
 - (void) setString:(id)a;
 - (void) didMoveToSuperview;
 - (void) _updateContentsScale:(id)a;
 - (void) setTextRotationAngle:(double)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
