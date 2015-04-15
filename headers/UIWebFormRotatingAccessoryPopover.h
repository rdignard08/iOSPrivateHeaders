
@protocol UIWebRotatingNodePopoverDelegate;
@interface UIWebFormRotatingAccessoryPopover : UIWebRotatingNodePopover <UIWebRotatingNodePopoverDelegate> {

}

 - (id) initWithDOMNode:(id)a;
 - (void) accessoryDone;
 - (unsigned long long) popoverArrowDirections;
 - (void) popoverWasDismissed:(id)a;


@end
