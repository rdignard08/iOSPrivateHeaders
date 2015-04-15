
@interface _UIDocumentActivityViewController : UIActivityViewController {

    BOOL hideSystemActivities;
    UIDocumentInteractionController* _documentInteractionController;
    BOOL _hideSystemActivities;
}

 - (BOOL) sourceIsManaged;
 - (id) documentInteractionController;
 - (void) _performActivity:(id)a ;
 - (void) setDocumentInteractionController:(id)a ;
 - (BOOL) _shouldShowSystemActivity:(id)a ;
 - (void) _prepareActivity:(id)a ;
 - (BOOL) hideSystemActivities;
 - (void) setHideSystemActivities:(BOOL)a ;


@end
