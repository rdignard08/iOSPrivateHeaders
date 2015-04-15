
@protocol UIKeyInput;
@interface UIWebSelectTableViewController : UITableViewController <UIKeyInput> {

    @"DOMHTMLSelectElement" _selectionNode;
    @"NSArray" _cachedItems;
    @"NSArray" _groupsAndOptions;
    unsigned long long _singleSelectionIndex;
    unsigned long long _singleSelectionSection;
    BOOL _allowsMultipleSelection;
    double _fontSize;
    double _maximumTextWidth;
    long long _textAlignment;
    @"UIWebSelectPopover" _popover;
}

 - (void) dealloc;
 - (void) tableView:(id)adidSelectRowAtIndexPath:(id)b;
 - (long long) tableView:(id)anumberOfRowsInSection:(long long)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (long long) numberOfSectionsInTableView:(id)a;
 - (id) tableView:(id)atitleForHeaderInSection:(long long)b;
 - (BOOL) hasText;
 - (void) deleteBackward;
 - (void) viewWillAppear:(BOOL)a;
 - (void) set_selectionNode:(id)a;
 - (void) set_cachedItems:(id)a;
 - (id) _selectionNode;
 - (id) _cachedItems;
 - (void) set_groupsAndOptions:(id)a;
 - (void) _setupGroupsAndOptions;
 - (BOOL) _isEmpty;
 - (id) _optionsForSection:(long long)a;
 - (id) initWithDOMHTMLSelectNode:(id)acachedItems:(id)bsingleSelectionIndex:(unsigned long long)cmultipleSelection:(BOOL)d;
 - (id) _groupsAndOptions;
 - (id) _popover;
 - (void) set_popover:(id)a;
 - (void) insertText:(id)a;


@end
