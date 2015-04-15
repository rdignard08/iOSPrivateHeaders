
@interface UITableViewIndexOverlaySelectionViewCollectionViewCell : UICollectionViewCell {

    @"UIButton" _button;
    double _rightMargin;
    BOOL _rightMarginAdjusted;
    id _tapTarget;
    SEL _tapAction;
}

 - (void) dealloc;
 - (id) button;
 - (void) layoutSubviews;
 - (void) setTextAlignment:(long long)a;
 - (void) setText:(id)a;
 - (long long) textAlignment;
 - (double) rightMargin;
 - (void) applyLayoutAttributes:(id)a;
 - (void) setRightMargin:(double)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) label;
 - (id) text;


@end
