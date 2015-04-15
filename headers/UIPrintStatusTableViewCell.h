
@interface UIPrintStatusTableViewCell : UITableViewCell {

    UIActivityIndicatorView* _activityIndicator;
    UILabel* _titleLabel;
    UILabel* _hostLabel;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (id) titleLabel;
 - (id) initWithReuseIdentifier:(id)a;
 - (void) setTitleLabel:(id)a;
 - (BOOL) showActive;
 - (void) setShowActive:(BOOL)a;
 - (id) hostLabel;
 - (void) setHostLabel:(id)a;


@end
