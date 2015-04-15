
@interface UITextPositionImpl : UITextPosition {

    @"WebVisiblePosition" _webVisiblePosition;
}
 + (id) wrapWebVisiblePosition:(id)a;

 - (id) description;
 - (void) dealloc;
 - (BOOL) isEqual:(id)a;
 - (id) webVisiblePosition;
 - (void) setWebVisiblePosition:(id)a;


@end
