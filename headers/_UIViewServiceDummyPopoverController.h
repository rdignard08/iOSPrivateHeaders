
@interface _UIViewServiceDummyPopoverController : UIPopoverController {

    <_UIViewServiceDummyPopoverControllerDelegate>* _dummyPopoverControllerDelegate;
}
 + (Class) _popoverViewClass;

 - (void) setPopoverContentSize:({CGSize=dd})a animated:(BOOL)b ;
 - (BOOL) _attemptsToAvoidKeyboard;
 - (id) dummyPopoverControllerDelegate;
 - (void) _popoverView:(id)a didSetUseToolbarShine:(BOOL)b ;
 - (void) _super_setPopoverContentSize:({CGSize=dd})a ;
 - (void) setDummyPopoverControllerDelegate:(id)a ;


@end
