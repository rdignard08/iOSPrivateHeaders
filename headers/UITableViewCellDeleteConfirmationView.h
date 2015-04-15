
@interface UITableViewCellDeleteConfirmationView : UIView {

    d _visibleWidth;
    {CGSize="width"d"height"d} _contentSize;
    d _visibleHeightRatio;
    d _cornerRadius;
    i _sectionLocation;
    @"_UITableViewCellActionButton" _deleteView;
    @"_UITableViewCellActionButton" _accessoryView;
    @"NSArray" _actionButtons;
}

 - (void) dealloc;
 - (void) didMoveToWindow;
 - ({CGSize=dd}) contentSize;
 - (void) setCornerRadius:(d)a;
 - (void) setVisibleHeightRatio:(d)a;
 - (i) sectionLocation;
 - (void) setSectionLocation:(i)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aactionButtons:(id)bcontentSize:({CGSize=dd})c;
 - (void) setVisibleWidth:(d)a;
 - (id) accessoryView;
 - (void) updateMaskView:(BOOL)a;
 - (void) updateBounds;
 - (d) visibleWidth;
 - (d) visibleHeightRatio;
 - (id) deleteView;
 - (d) cornerRadius;


@end
