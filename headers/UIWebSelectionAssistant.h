
@protocol UIGestureRecognizerDelegate;
@interface UIWebSelectionAssistant : NSObject <UIGestureRecognizerDelegate> {

    UIView _view;
    UIWebSelectionView _selectionView;
    UILongPressGestureRecognizer _longPressGestureRecognizer;
    UITapAndAHalfRecognizer _tapAndAHalfGestureRecognizer;
    BOOL _enabled;
}
@property (nonatomic, assign, readonly) UIWebSelection* selection;
@property (nonatomic, assign, readonly) UIWebSelectionView* selectionView;
@property (nonatomic, assign, readonly) NSNumber* selectionFrame;
@property (nonatomic, assign, readwrite) NSNumber* enabled;

 - (void) dealloc;
 - (BOOL) gestureRecognizerShouldBegin:(id)a;
 - (BOOL) gestureRecognizer:(id)ashouldRecognizeSimultaneouslyWithGestureRecognizer:(id)b;
 - (BOOL) gestureRecognizer:(id)ashouldReceiveTouch:(id)b;
 - (id) selectionView;
 - (id) selection;
 - (void) selectionChanged;
 - (id) initWithView:(id)a;
 - (void) setGestureRecognizers;
 - (void) resignedFirstResponder;
 - (BOOL) enabled;
 - (void) clearSelection;
 - (void) layoutChangedByScrolling:(BOOL)a;
 - (void) willStartScrollingOverflow;
 - (void) didEndScrollingOverflow;
 - (void) scaleChanged;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) selectionFrame;
 - (void) willStartScrollingOrZoomingPage;
 - (void) didEndScrollingOrZoomingPage;
 - (BOOL) isSelectionGestureRecognizer:(id)a;
 - (void) willRotate:(id)a;
 - (void) didRotate:(id)a;
 - (void) makeWebSelection:(id)a;
 - (void) hideCallout;
 - (void) tap:(id)a;
 - (id) hitTest:({CGPoint=dd})awithEvent:(id)bfromView:(id)c;
 - (void) setEnabled:(BOOL)a;


@end
