
@interface _UIActivityGroupListViewLayout : UICollectionViewFlowLayout {

}

 - (id) layoutAttributesForElementsInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) layoutAttributesForItemAtIndexPath:(id)a;
 - (id) finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a;
 - (id) finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)aatIndexPath:(id)b;
 - (id) initialLayoutAttributesForAppearingItemAtIndexPath:(id)a;
 - (id) initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)aatIndexPath:(id)b;
 - (void) adjustLayoutAttributesIfNeeded:(id)a;


@end
