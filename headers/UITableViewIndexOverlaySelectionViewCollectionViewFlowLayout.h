
@interface UITableViewIndexOverlaySelectionViewCollectionViewFlowLayout : UICollectionViewFlowLayout {

    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _frameForDoneButton;
    double _rightMarginForDoneButton;
}
 + (Class) layoutAttributesClass;

 - (id) layoutAttributesForElementsInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) layoutAttributesForSupplementaryViewOfKind:(id)a atIndexPath:(id)b ;
 - (double) rightMarginForDoneButton;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frameForDoneButton;
 - (void) setFrameForDoneButton:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setRightMarginForDoneButton:(double)a ;


@end
