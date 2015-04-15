
@interface _UIFocusDebugOverlayView : UIView {

    UIColor* _overlayColor;
    UIView* _highlightView;
}

 - (void) doesNotRecognizeSelector:(SEL)a ;
 - (void) dealloc;
 - (id) _focusItemsOverlayCreateIfNecessary:(BOOL)a ;
 - (void) _removeFocusItemOverlayViews;
 - (id) initWithView:(id)a ;
 - (void) _highlightPreferredFocusView:(id)a ;
 - (void) _unhighlightPreferredFocusView;
 - (void) setOverlayColor:(id)a ;
 - (id) overlayColor;
 - (void) setHighlightView:(id)a ;
 - (id) highlightView;


@end
