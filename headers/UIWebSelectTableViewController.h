
@protocol UIKeyInput;
@interface UIWebSelectTableViewController : UITableViewController <UIKeyInput> {

    @"DOMHTMLSelectElement" _selectionNode;
    @"NSArray" _cachedItems;
    @"NSArray" _groupsAndOptions;
    Q _singleSelectionIndex;
    Q _singleSelectionSection;
    BOOL _allowsMultipleSelection;
    d _fontSize;
    d _maximumTextWidth;
    q _textAlignment;
    @"UIWebSelectPopover" _popover;
}

 - (void) dealloc;
 - (void) tableView:(id)adidSelectRowAtIndexPath:(id)b;
 - (q) tableView:(id)anumberOfRowsInSection:(q)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (q) numberOfSectionsInTableView:(id)a;
 - (id) tableView:(id)atitleForHeaderInSection:(q)b;
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
 - (id) _optionsForSection:(q)a;
 - (id) initWithDOMHTMLSelectNode:(id)acachedItems:(id)bsingleSelectionIndex:(Q)cmultipleSelection:(BOOL)d;
 - (id) _groupsAndOptions;
 - (id) _popover;
 - (void) set_popover:(id)a;
 - (void) insertText:(id)a;


@end
