
@interface _UIDelegatingActionActivity : UIActivity {

    UIDocumentInteractionController* _documentInteractionController;
    SEL _action;
}

 - (id) activityType;
 - (id) _activityImage;
 - (id) activityTitle;
 - (BOOL) canPerformWithActivityItems:(id)a ;
 - (void) performActivity;
 - (id) initWithDocumentInteractionController:(id)a forAction:(SEL)b ;


@end
