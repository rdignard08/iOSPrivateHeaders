
@interface UITextSelectionRectImpl : UITextSelectionRect {

    @"WebSelectionRect" webRect;
}
 + (id) rectsWithWebRects:(id)a;
 + (id) rectWithWebRect:(id)a;

 - (void) dealloc;
 - (id) webRect;
 - (void) setWebRect:(id)a;
 - (id) initWithWebRect:(id)a;
 - (id) range;
 - (BOOL) isVertical;
 - (BOOL) containsStart;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rect;
 - (q) writingDirection;
 - (BOOL) containsEnd;


@end
