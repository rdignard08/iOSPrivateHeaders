
@interface _UILocationResultsTableViewCell : UITableViewCell {

    long long _locationImageType;
    @"UIImage" _customLocationImage;
    @"UILabel" _searchTextLabel;
    @"UILabel" _searchDetailTextLabel;
    @"UIImageView" _searchImageView;
    @"NSLayoutConstraint" _topMarginConstraint;
    @"NSLayoutConstraint" _interLabelSpaceConstraint;
    @"NSLayoutConstraint" _bottomMarginConstraint;
    @"UIView" _cellHeightStrut;
    double _additionalLeftSidePadding;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (id) initWithStyle:(long long)areuseIdentifier:(id)b;
 - (void) prepareForReuse;
 - (id) textLabel;
 - (id) detailTextLabel;
 - (id) imageView;
 - (id) _searchImageView;
 - (long long) locationImageType;
 - (double) _defaultCellTopMargin;
 - (void) setTopMarginConstraint:(id)a;
 - (double) _defaultCellBottomMargin;
 - (void) setBottomMarginConstraint:(id)a;
 - (double) _subtitleCellTopMargin;
 - (void) _applyLeftAndRightAlignmentConstraints:(id)a;
 - (double) _subtitleCellBottomMargin;
 - (double) _subtitleCellInterLabelSpace;
 - (void) setInterLabelSpaceConstraint:(id)a;
 - (void) _updateLabelFontsAndConstraints;
 - (void) setLocationImageType:(long long)a;
 - (void) setCustomLocationImage:(id)a;
 - (id) customLocationImage;
 - (id) searchTextLabel;
 - (void) setSearchTextLabel:(id)a;
 - (id) searchDetailTextLabel;
 - (void) setSearchDetailTextLabel:(id)a;
 - (id) searchImageView;
 - (void) setSearchImageView:(id)a;
 - (id) topMarginConstraint;
 - (id) interLabelSpaceConstraint;
 - (id) bottomMarginConstraint;
 - (id) cellHeightStrut;
 - (void) setCellHeightStrut:(id)a;
 - (double) additionalLeftSidePadding;
 - (void) setAdditionalLeftSidePadding:(double)a;
 - (id) contentView;


@end
