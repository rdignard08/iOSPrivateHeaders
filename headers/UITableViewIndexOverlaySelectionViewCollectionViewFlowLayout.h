
@interface UITableViewIndexOverlaySelectionViewCollectionViewFlowLayout : UICollectionViewFlowLayout {

    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _frameForDoneButton;
    d _rightMarginForDoneButton;
}
 + (Class) layoutAttributesClass;

 - (id) layoutAttributesForElementsInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) layoutAttributesForSupplementaryViewOfKind:(id)aatIndexPath:(id)b;
 - (d) rightMarginForDoneButton;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frameForDoneButton;
 - (void) setFrameForDoneButton:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setRightMarginForDoneButton:(d)a;


@end
