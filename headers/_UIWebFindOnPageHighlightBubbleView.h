
@interface _UIWebFindOnPageHighlightBubbleView : UIView {

    ^{CGImage=} _highlightedContent;
    {CGPoint="x"d"y"d} _highlightedContentOrigin;
}

 - (void) dealloc;
 - (void) setHighlightedContent:(^{CGImage=})a withOrigin:({CGPoint=dd})b ;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
