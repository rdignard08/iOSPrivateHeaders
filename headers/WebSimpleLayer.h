
@interface WebSimpleLayer : CALayer {

}

 - (void) display;
 - (void) setNeedsDisplay;
 - (id) actionForKey:(id)a;
 - (void) setNeedsDisplayInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) drawInContext:(^{CGContext=})a;


@end
