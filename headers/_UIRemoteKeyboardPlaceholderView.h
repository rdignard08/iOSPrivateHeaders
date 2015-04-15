
@protocol _UIRemoteKeyboardInputViewPlaceholder;
@interface _UIRemoteKeyboardPlaceholderView : UIView <_UIRemoteKeyboardInputViewPlaceholder> {

    @"UIView" _mirroredView;
}
 + (id) placeholderForView:(id)a;
 + (id) placeholderWithWidth:(double)aheight:(double)b;

 - (void) dealloc;
 - (id) hitTest:({CGPoint=dd})awithEvent:(id)b;
 - ({CGSize=dd}) intrinsicContentSize;
 - (BOOL) refreshPlaceholder;
 - (id) placeheldView;
 - (id) initWithSize:({CGSize=dd})a;


@end
