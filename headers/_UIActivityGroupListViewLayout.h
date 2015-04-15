
@interface _UIActivityGroupListViewLayout : UICollectionViewFlowLayout {

}

 - (id) layoutAttributesForElementsInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) layoutAttributesForItemAtIndexPath:(id)a ;
 - (id) finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a ;
 - (id) finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)a atIndexPath:(id)b ;
 - (id) initialLayoutAttributesForAppearingItemAtIndexPath:(id)a ;
 - (id) initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)a atIndexPath:(id)b ;
 - (void) adjustLayoutAttributesIfNeeded:(id)a ;


@end
