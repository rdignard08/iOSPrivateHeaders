
@interface UIKeyboardCandidateBarLayout : UICollectionViewLayout {

    {CGSize="width"d"height"d} _contentSize;
    NSMutableArray* _allAttributes;
    NSArray* _edgeDummyCellAttributes;
}
 + (id) dummyCellCollectionViewKind;
 + (Class) layoutAttributesClass;
 + (id) layout;

 - (void) dealloc;
 - (id) layoutAttributesForElementsInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) layoutAttributesForItemAtIndexPath:(id)a;
 - ({CGSize=dd}) collectionViewContentSize;
 - (id) layoutAttributesForSupplementaryViewOfKind:(id)aatIndexPath:(id)b;
 - (void) prepareLayout;
 - (id) allAttributes;
 - (id) edgeDummyCellAttributes;
 - (void) setEdgeDummyCellAttributes:(id)a;
 - (void) setAllAttributes:(id)a;
 - (id) init;


@end
