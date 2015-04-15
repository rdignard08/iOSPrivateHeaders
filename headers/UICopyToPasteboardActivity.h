
@interface UICopyToPasteboardActivity : UIActivity {

}

 - (id) activityType;
 - (id) _activityImage;
 - (id) activityTitle;
 - (BOOL) canPerformWithActivityItems:(id)a;
 - (void) performActivity;
 - (void) prepareWithActivityItems:(id)a;
 - (id) pasteboard;


@end
