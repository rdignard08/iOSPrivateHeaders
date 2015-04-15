
@interface UIPrinterSearchingView : UIView {

    UILabel* _searchingLabel;
    UIActivityIndicatorView* _searchingIndicator;
    NSArray* _searchingLabelConstraints;
}

 - (void) dealloc;
 - (void) searchTimeout;
 - (id) initInView:(id)a;
 - (void) setSearching:(BOOL)a;


@end
