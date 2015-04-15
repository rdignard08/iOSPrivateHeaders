
@interface UITableViewIndexOverlaySelectionViewCollectionViewCell : UICollectionViewCell {

    @"UIButton" _button;
    d _rightMargin;
    BOOL _rightMarginAdjusted;
    id _tapTarget;
    SEL _tapAction;
}

 - (void) dealloc;
 - (id) button;
 - (void) layoutSubviews;
 - (void) setTextAlignment:(q)a;
 - (void) setText:(id)a;
 - (q) textAlignment;
 - (d) rightMargin;
 - (void) applyLayoutAttributes:(id)a;
 - (void) setRightMargin:(d)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) label;
 - (id) text;


@end
