
@interface _UILocationResultsTableViewCell : UITableViewCell {

    q _locationImageType;
    @"UIImage" _customLocationImage;
    @"UILabel" _searchTextLabel;
    @"UILabel" _searchDetailTextLabel;
    @"UIImageView" _searchImageView;
    @"NSLayoutConstraint" _topMarginConstraint;
    @"NSLayoutConstraint" _interLabelSpaceConstraint;
    @"NSLayoutConstraint" _bottomMarginConstraint;
    @"UIView" _cellHeightStrut;
    d _additionalLeftSidePadding;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (id) initWithStyle:(q)areuseIdentifier:(id)b;
 - (void) prepareForReuse;
 - (id) textLabel;
 - (id) detailTextLabel;
 - (id) imageView;
 - (id) _searchImageView;
 - (q) locationImageType;
 - (d) _defaultCellTopMargin;
 - (void) setTopMarginConstraint:(id)a;
 - (d) _defaultCellBottomMargin;
 - (void) setBottomMarginConstraint:(id)a;
 - (d) _subtitleCellTopMargin;
 - (void) _applyLeftAndRightAlignmentConstraints:(id)a;
 - (d) _subtitleCellBottomMargin;
 - (d) _subtitleCellInterLabelSpace;
 - (void) setInterLabelSpaceConstraint:(id)a;
 - (void) _updateLabelFontsAndConstraints;
 - (void) setLocationImageType:(q)a;
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
 - (d) additionalLeftSidePadding;
 - (void) setAdditionalLeftSidePadding:(d)a;
 - (id) contentView;


@end
