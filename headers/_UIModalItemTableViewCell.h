
@interface _UIModalItemTableViewCell : UITableViewCell {

    BOOL _showFullWidthSeparator;
    @"UIColor" _fullWitdhSeparatorColor;
    @"UIView" _fullWidthSeparatorView;
    @"UIView" _topSeparatorView;
    BOOL _isEnabled;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (id) initWithStyle:(q)areuseIdentifier:(id)b;
 - (void) setShowFullWidthSeparator:(BOOL)a;
 - (void) setFullWidthSeparatorColor:(id)a;
 - (void) setIsEnabled:(BOOL)a;
 - (id) topSeparatorView;
 - (BOOL) showFullWidthSeparator;
 - (id) fullWidthSeparatorColor;
 - (BOOL) isEnabled;


@end
