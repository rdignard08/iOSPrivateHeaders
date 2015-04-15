
@interface _UIViewServiceDummyPopoverController : UIPopoverController {

    <_UIViewServiceDummyPopoverControllerDelegate> _dummyPopoverControllerDelegate;
}
 + (Class) _popoverViewClass;

 - (void) setPopoverContentSize:({CGSize=dd})aanimated:(BOOL)b;
 - (BOOL) _attemptsToAvoidKeyboard;
 - (id) dummyPopoverControllerDelegate;
 - (void) _popoverView:(id)adidSetUseToolbarShine:(BOOL)b;
 - (void) _super_setPopoverContentSize:({CGSize=dd})a;
 - (void) setDummyPopoverControllerDelegate:(id)a;


@end
