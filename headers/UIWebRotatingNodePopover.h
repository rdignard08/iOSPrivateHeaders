
@protocol UIPopoverControllerDelegate;
@interface UIWebRotatingNodePopover : NSObject <UIPopoverControllerDelegate> {

    BOOL _isRotating;
    DOMNode* _node;
    {CGPoint="x"d"y"d} _presentationPoint;
    UIPopoverController* _popoverController;
    <UIWebRotatingNodePopoverDelegate>* _dismissDelegate;
}
@property (nonatomic, retain, readwrite) DOMNode* node;
@property (nonatomic, assign, readwrite) NSNumber* presentationPoint;
@property (nonatomic, retain, readwrite) UIPopoverController* popoverController;
@property (nonatomic, assign, readwrite) NSNumber* dismissDelegate;

 - (void) dealloc;
 - (void) dismissPopoverAnimated:(BOOL)a ;
 - (void) popoverControllerDidDismissPopover:(id)a ;
 - (id) node;
 - (id) initWithDOMNode:(id)a ;
 - (void) setPopoverController:(id)a ;
 - (void) presentPopoverAnimated:(BOOL)a ;
 - (void) willRotate:(id)a ;
 - (void) didRotate:(id)a ;
 - (id) popoverController;
 - (void) setNode:(id)a ;
 - (void) setPresentationPoint:({CGPoint=dd})a ;
 - (unsigned long long) popoverArrowDirections;
 - ({CGPoint=dd}) presentationPoint;
 - (id) dismissDelegate;
 - (void) setDismissDelegate:(id)a ;


@end
