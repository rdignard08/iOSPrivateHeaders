
@protocol _UIDocumentPickerViewControllerExtensionHost;
@interface _UIDocumentPickerExtensionRemoteViewController : _UIDocumentPickerRemoteViewController <_UIDocumentPickerViewControllerExtensionHost> {

}
 + (id) exportedInterface;
 + (id) serviceViewControllerInterface;

 - (void) _displayLocationMenu:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) _doneButtonPressed;


@end
