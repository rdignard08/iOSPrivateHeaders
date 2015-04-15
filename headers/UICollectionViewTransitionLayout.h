
@interface UICollectionViewTransitionLayout : UICollectionViewLayout {

    UICollectionViewLayout* _fromLayout;
    UICollectionViewLayout* _toLayout;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _fromVisibleBounds;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _toVisibleBounds;
    {CGSize="width"d"height"d} _contentSize;
    BOOL _haveValidInfos;
    double _transitionProgress;
    NSMutableDictionary* _transitionInformationsDict;
    NSMutableDictionary* _currentLayoutInfos;
    BOOL _layoutIsValid;
    NSMutableArray* _disappearingLayoutAttributes;
    NSMutableArray* _appearingLayoutAttributes;
    double _accuracy;
}

 - (void) dealloc;
 - (id) layoutAttributesForElementsInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) layoutAttributesForItemAtIndexPath:(id)a ;
 - ({CGSize=dd}) collectionViewContentSize;
 - (void) invalidateLayout;
 - (id) layoutAttributesForSupplementaryViewOfKind:(id)a atIndexPath:(id)b ;
 - (id) layoutAttributesForDecorationViewOfKind:(id)a atIndexPath:(id)b ;
 - (void) prepareLayout;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _oldVisibleBounds;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _newVisibleBounds;
 - (void) _setCollectionView:(id)a ;
 - ({CGPoint=dd}) targetContentOffsetForProposedContentOffset:({CGPoint=dd})a ;
 - (void) _prepareForTransitionToLayout:(id)a ;
 - (void) _prepareForTransitionFromLayout:(id)a ;
 - (void) setTransitionProgress:(double)a ;
 - (BOOL) _supportsAdvancedTransitionAnimations;
 - (void) _finalizeLayoutTransition;
 - (id) initWithCurrentLayout:(id)a nextLayout:(id)b ;
 - (id) currentLayout;
 - (id) nextLayout;
 - (double) transitionProgress;
 - (id) interpolatedLayoutAttributesFromLayoutAttributes:(id)a toLayoutAttributes:(id)b progress:(double)c ;
 - (void) updateValue:(double)a forAnimatedKey:(id)b ;
 - (double) valueForAnimatedKey:(id)a ;


@end
