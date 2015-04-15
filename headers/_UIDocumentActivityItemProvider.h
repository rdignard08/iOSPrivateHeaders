
@interface _UIDocumentActivityItemProvider : UIActivityItemProvider {

    UIDocumentInteractionController _documentInteractionController;
}

 - (id) item;
 - (id) documentInteractionController;
 - (void) setDocumentInteractionController:(id)a;
 - (id) activityViewControllerPlaceholderItem:(id)a;
 - (id) activityViewController:(id)aitemForActivityType:(id)b;


@end
