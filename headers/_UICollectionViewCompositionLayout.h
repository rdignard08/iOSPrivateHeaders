
@interface _UICollectionViewCompositionLayout : UICollectionViewLayout {

    @"NSMutableDictionary" _sublayoutsDict;
}
 + (Class) invalidationContextClass;

 - (void) dealloc;
 - (id) layoutAttributesForElementsInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) layoutAttributesForItemAtIndexPath:(id)a;
 - ({CGSize=dd}) collectionViewContentSize;
 - (id) sublayouts;
 - (id) _originConvertedSublayoutAttributesForAttributes:(id)ainLayout:(id)b;
 - (BOOL) shouldInvalidateLayoutForPreferredLayoutAttributes:(id)awithOriginalAttributes:(id)b;
 - (id) layoutAttributesForSupplementaryViewOfKind:(id)aatIndexPath:(id)b;
 - (id) layoutAttributesForDecorationViewOfKind:(id)aatIndexPath:(id)b;
 - (void) prepareLayout;
 - (void) _prepareLayout:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _frameForLayout:(id)aoffset:({CGPoint=dd})brelativeToEdges:(unsigned long long)cfromSiblingLayout:(id)d;
 - (void) invalidateLayoutWithContext:(^{_UICollectionViewCompositionLayoutInvalidationContext=#@})a;
 - (id) invalidationContextForBoundsChange:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) invalidationContextForPreferredLayoutAttributes:(id)awithOriginalAttributes:(id)b;
 - (void) addSublayout:(id)aforRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (void) addSublayout:(id)aforSections:(id)boffset:({CGPoint=dd})crelativeToEdges:(unsigned long long)dfromSiblingLayout:(id)e;
 - (void) addSublayout:(id)aforItems:(id)binSection:(long long)coffset:({CGPoint=dd})drelativeToEdges:(unsigned long long)efromSiblingLayout:(id)f;
 - (void) addSublayout:(id)aforElementKinds:(id)b;
 - (void) removeSublayout:(id)a;
 - (id) init;


@end
