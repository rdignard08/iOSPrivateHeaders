
@interface UICollectionReusableView : UIView {

    UICollectionViewLayoutAttributes* _layoutAttributes;
    NSString* _reuseIdentifier;
    UICollectionView* _collectionView;
    long long _updateAnimationCount;
    {?="wasDequeued"b1"preferredAttributesValid"b1"generatingPreferredAttributes"b1} _reusableViewFlags;
    BOOL _preferredAttributesValid;
}

 - (void) dealloc;
 - (id) _collectionView;
 - (id) reuseIdentifier;
 - (void) prepareForReuse;
 - (void) applyLayoutAttributes:(id)a;
 - (void) _setBaseLayoutAttributes:(id)a;
 - (BOOL) _disableRasterizeInAnimations;
 - (void) _setLayoutAttributes:(id)a;
 - (void) _setCollectionView:(id)a;
 - (BOOL) _isInUpdateAnimation;
 - (id) _layoutAttributes;
 - (BOOL) _arePreferredAttributesValid;
 - (id) _preferredLayoutAttributesFittingAttributes:(id)a;
 - (BOOL) _wasDequeued;
 - (void) _invalidatePreferredAttributes;
 - (void) _markAsDequeued;
 - (void) willTransitionFromLayout:(id)atoLayout:(id)b;
 - (void) _addUpdateAnimation;
 - (void) didTransitionFromLayout:(id)atoLayout:(id)b;
 - (void) _clearUpdateAnimation;
 - (void) _setReuseIdentifier:(id)a;
 - (id) preferredLayoutAttributesFittingAttributes:(id)a;
 - (void) setPreferredAttributesValid:(BOOL)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
