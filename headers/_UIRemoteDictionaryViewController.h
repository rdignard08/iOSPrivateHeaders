
@interface _UIRemoteDictionaryViewController : UITableViewController {

    NSArray* _availableDictionaries;
}

 - (void) dealloc;
 - (BOOL) tableView:(id)a shouldHighlightRowAtIndexPath:(id)b ;
 - (long long) tableView:(id)a numberOfRowsInSection:(long long)b ;
 - (id) tableView:(id)a cellForRowAtIndexPath:(id)b ;
 - (id) initWithStyle:(long long)a ;
 - (id) _cloudBackgroundImage;
 - (id) _downloadArrowImage;
 - (id) _downloadImageWithTintColor:(id)a ;
 - (void) _handleDownloadButton:(id)a ;
 - (id) _downloadOptionsDictionary;
 - (id) _downloadButton;
 - (void) _handleDeleteButton:(id)a ;


@end
