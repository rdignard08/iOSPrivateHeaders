
@interface _UIOpenInTableViewController : UITableViewController {

    UIDocumentInteractionController* _documentInteractionController;
}

 - (void) tableView:(id)a didSelectRowAtIndexPath:(id)b ;
 - (long long) tableView:(id)a numberOfRowsInSection:(long long)b ;
 - (id) tableView:(id)a cellForRowAtIndexPath:(id)b ;
 - (id) initWithDocumentInteractionController:(id)a ;


@end
