
@interface UIPrintStatusJobTableViewCell : UITableViewCell {

    UIActivityIndicatorView* _activityIndicator;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (id) initWithReuseIdentifier:(id)a ;
 - (BOOL) showActive;
 - (void) setShowActive:(BOOL)a ;


@end
