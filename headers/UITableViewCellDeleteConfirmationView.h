
@interface UITableViewCellDeleteConfirmationView : UIView {

    double _visibleWidth;
    {CGSize="width"d"height"d} _contentSize;
    double _visibleHeightRatio;
    double _cornerRadius;
    int _sectionLocation;
    _UITableViewCellActionButton* _deleteView;
    _UITableViewCellActionButton* _accessoryView;
    NSArray* _actionButtons;
}

 - (void) dealloc;
 - (void) didMoveToWindow;
 - ({CGSize=dd}) contentSize;
 - (void) setCornerRadius:(double)a;
 - (void) setVisibleHeightRatio:(double)a;
 - (int) sectionLocation;
 - (void) setSectionLocation:(int)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aactionButtons:(id)bcontentSize:({CGSize=dd})c;
 - (void) setVisibleWidth:(double)a;
 - (id) accessoryView;
 - (void) updateMaskView:(BOOL)a;
 - (void) updateBounds;
 - (double) visibleWidth;
 - (double) visibleHeightRatio;
 - (id) deleteView;
 - (double) cornerRadius;


@end
