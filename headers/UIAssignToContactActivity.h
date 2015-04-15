
@protocol ABPeoplePickerNavigationControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate;
@interface UIAssignToContactActivity : UIActivity <ABPeoplePickerNavigationControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate> {

    UIImage _image;
    ABPeoplePickerNavigationController _peoplePicker;
    ^v _person;
    UIImagePickerController _imagePickerController;
}

 - (id) activityType;
 - (void) dealloc;
 - (void) imagePickerControllerDidCancel:(id)a;
 - (void) imagePickerController:(id)adidFinishPickingMediaWithInfo:(id)b;
 - (id) _activityImage;
 - (id) activityTitle;
 - (BOOL) canPerformWithActivityItems:(id)a;
 - (id) activityViewController;
 - (void) prepareWithActivityItems:(id)a;
 - (id) _embeddedActivityViewController;
 - (void) _willPresentAsFormSheet;
 - (id) peoplePicker;
 - (void) setPeoplePicker:(id)a;
 - (id) imagePickerController;
 - (void) setImagePickerController:(id)a;
 - (void) peoplePickerNavigationControllerDidCancel:(id)a;
 - (BOOL) peoplePickerNavigationController:(id)ashouldContinueAfterSelectingPerson:(^v)b;
 - (BOOL) peoplePickerNavigationController:(id)ashouldContinueAfterSelectingPerson:(^v)bproperty:(int)cidentifier:(int)d;
 - (^v) person;
 - (void) setPerson:(^v)a;
 - (void) _cleanup;
 - (void) setImage:(id)a;
 - (id) image;


@end
