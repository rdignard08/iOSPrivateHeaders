
@protocol UIWebRotatingNodePopoverDelegate;
@interface UIWebFormRotatingAccessoryPopover : UIWebRotatingNodePopover <UIWebRotatingNodePopoverDelegate> {

}

 - (id) initWithDOMNode:(id)a;
 - (void) accessoryDone;
 - (Q) popoverArrowDirections;
 - (void) popoverWasDismissed:(id)a;


@end
