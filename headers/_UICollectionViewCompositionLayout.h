
@interface _UICollectionViewCompositionLayout : UICollectionViewLayout {

    NSMutableDictionary* _sublayoutsDict;
}
 + (Class) invalidationContextClass;

 - (void) dealloc;
 - (id) layoutAttributesForElementsInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) layoutAttributesForItemAtIndexPath:(id)a ;
 - ({CGSize=dd}) collectionViewContentSize;
 - (id) sublayouts;
 - (id) _originConvertedSublayoutAttributesForAttributes:(id)a inLayout:(id)b ;
 - (BOOL) shouldInvalidateLayoutForPreferredLayoutAttributes:(id)a withOriginalAttributes:(id)b ;
 - (id) layoutAttributesForSupplementaryViewOfKind:(id)a atIndexPath:(id)b ;
 - (id) layoutAttributesForDecorationViewOfKind:(id)a atIndexPath:(id)b ;
 - (void) prepareLayout;
 - (void) _prepareLayout:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _frameForLayout:(id)a offset:({CGPoint=dd})b relativeToEdges:(unsigned long long)c fromSiblingLayout:(id)d ;
 - (void) invalidateLayoutWithContext:(^{_UICollectionViewCompositionLayoutInvalidationContext=#@})a ;
 - (id) invalidationContextForBoundsChange:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) invalidationContextForPreferredLayoutAttributes:(id)a withOriginalAttributes:(id)b ;
 - (void) addSublayout:(id)a forRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (void) addSublayout:(id)a forSections:(id)b offset:({CGPoint=dd})c relativeToEdges:(unsigned long long)d fromSiblingLayout:(id)e ;
 - (void) addSublayout:(id)a forItems:(id)b inSection:(long long)c offset:({CGPoint=dd})d relativeToEdges:(unsigned long long)e fromSiblingLayout:(id)f ;
 - (void) addSublayout:(id)a forElementKinds:(id)b ;
 - (void) removeSublayout:(id)a ;
 - (id) init;


@end
