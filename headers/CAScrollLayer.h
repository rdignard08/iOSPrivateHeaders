
@interface CAScrollLayer : CALayer {

}
 + (id) defaultValueForKey:(id)a;
 + (BOOL) CA_automaticallyNotifiesObservers:(Class)a;

 - (id) scrollMode;
 - (void) scrollToPoint:({CGPoint=dd})a;
 - (void) scrollToRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) _scrollPoint:({CGPoint=dd})afromLayer:(id)b;
 - (void) _scrollRect:({CGRect={CGPoint=dd}{CGSize=dd}})afromLayer:(id)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _visibleRectOfLayer:(id)a;
 - (void) setScrollMode:(id)a;


@end
