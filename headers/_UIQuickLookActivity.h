
@interface _UIQuickLookActivity : UIActivity {

    @"UIDocumentInteractionController" _documentInteractionController;
}

 - (id) activityType;
 - (id) activityTitle;
 - (BOOL) canPerformWithActivityItems:(id)a;
 - (void) performActivity;
 - (id) initWithDocumentInteractionController:(id)a;
 - (id) activityImage;
 - (void) _cleanup;


@end
