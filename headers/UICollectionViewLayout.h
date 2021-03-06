
@protocol NSCoding;
@interface UICollectionViewLayout : NSObject <NSCoding> {

    UICollectionView* _collectionView;
    {CGSize="width"d"height"d} _collectionViewBoundsSize;
    NSMutableDictionary* _initialAnimationLayoutAttributesDict;
    NSMutableDictionary* _finalAnimationLayoutAttributesDict;
    NSMutableDictionary* _deletedSupplementaryIndexPathsDict;
    NSMutableDictionary* _insertedSupplementaryIndexPathsDict;
    NSMutableDictionary* _deletedDecorationIndexPathsDict;
    NSMutableDictionary* _insertedDecorationIndexPathsDict;
    NSMutableIndexSet* _deletedSectionsSet;
    NSMutableIndexSet* _insertedSectionsSet;
    NSMutableDictionary* _decorationViewClassDict;
    NSMutableDictionary* _decorationViewNibDict;
    NSMutableDictionary* _decorationViewExternalObjectsTables;
    UICollectionViewLayout* _transitioningFromLayout;
    UICollectionViewLayout* _transitioningToLayout;
    UIDynamicAnimator* _animator;
    UICollectionViewLayoutInvalidationContext* _invalidationContext;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _frame;
    NSIndexSet* _sections;
    NSIndexSet* _items;
    NSArray* _elementKinds;
    ^{_UICollectionViewCompositionLayout=#} _compositionLayout;
    UICollectionViewLayout* _siblingLayout;
    {CGPoint="x"d"y"d} _layoutOffset;
    unsigned long long _layoutOffsetEdges;
    {?="inTransitionFromTransitionLayout"b1"inTransitionToTransitionLayout"b1"prepared"b1} _layoutFlags;
    long long _sublayoutType;
}
@property (nonatomic, assign, readonly) UICollectionView* collectionView;
@property (nonatomic, assign, readwrite, getter=_frame, setter=_setFrame:) NSNumber* frame;
@property (nonatomic, copy, readwrite, getter=_sections, setter=_setSections:) NSIndexSet* sections;
@property (nonatomic, copy, readwrite, getter=_items, setter=_setItems:) NSIndexSet* items;
@property (nonatomic, copy, readwrite, getter=_elementKinds, setter=_setElementKinds:) NSArray* elementKinds;
@property (nonatomic, assign, readwrite, getter=_compositionLayout, setter=_setCompositionLayout:) _UICollectionViewCompositionLayout* compositionLayout;
@property (nonatomic, assign, readwrite, getter=_siblingLayout, setter=_setSiblingLayout:) UICollectionViewLayout* siblingLayout;
@property (nonatomic, assign, readwrite, getter=_layoutOffset, setter=_setLayoutOffset:) NSNumber* layoutOffset;
@property (nonatomic, assign, readwrite, getter=_layoutOffsetEdges, setter=_setLayoutOffsetEdges:) NSNumber* layoutOffsetEdges;
@property (nonatomic, assign, readwrite, getter=_sublayoutType, setter=_setSublayoutType:) NSNumber* sublayoutType;
@property (nonatomic, assign, readwrite, getter=_isPrepared, setter=_setPrepared:) NSNumber* prepared;
 + (Class) invalidationContextClass;
 + (Class) layoutAttributesClass;

 - (void) dealloc;
 - (id) layoutAttributesForElementsInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) layoutAttributesForItemAtIndexPath:(id)a ;
 - (id) collectionView;
 - (id) _items;
 - ({CGSize=dd}) collectionViewContentSize;
 - (void) invalidateLayout;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _bounds;
 - (void) _setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) _setSublayoutType:(long long)a ;
 - (void) _setCompositionLayout:(^{_UICollectionViewCompositionLayout=#})a ;
 - (void) _setSections:(id)a ;
 - (void) _setLayoutOffset:({CGPoint=dd})a ;
 - (void) _setLayoutOffsetEdges:(unsigned long long)a ;
 - (void) _setSiblingLayout:(id)a ;
 - (void) _setItems:(id)a ;
 - (void) _setElementKinds:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) convertRect:({CGRect={CGPoint=dd}{CGSize=dd}})a fromLayout:(id)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) convertRect:({CGRect={CGPoint=dd}{CGSize=dd}})a toLayout:(id)b ;
 - (id) _sections;
 - (BOOL) shouldInvalidateLayoutForPreferredLayoutAttributes:(id)a withOriginalAttributes:(id)b ;
 - (id) layoutAttributesForSupplementaryViewOfKind:(id)a atIndexPath:(id)b ;
 - (id) layoutAttributesForDecorationViewOfKind:(id)a atIndexPath:(id)b ;
 - (void) prepareLayout;
 - (id) _siblingLayout;
 - (BOOL) _isPrepared;
 - ({CGPoint=dd}) _layoutOffset;
 - (unsigned long long) _layoutOffsetEdges;
 - (void) invalidateLayoutWithContext:(id)a ;
 - (id) invalidationContextForBoundsChange:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) invalidationContextForPreferredLayoutAttributes:(id)a withOriginalAttributes:(id)b ;
 - (void) registerClass:(Class)a forDecorationViewOfKind:(id)b ;
 - (BOOL) shouldInvalidateLayoutForBoundsChange:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) indexPathsToDeleteForSupplementaryViewOfKind:(id)a ;
 - (id) indexPathsToDeleteForDecorationViewOfKind:(id)a ;
 - (id) indexPathsToInsertForSupplementaryViewOfKind:(id)a ;
 - (id) indexPathsToInsertForDecorationViewOfKind:(id)a ;
 - (void) _setCollectionView:(id)a ;
 - (void) _invalidateLayoutUsingContext:(id)a ;
 - (id) _decorationViewForLayoutAttributes:(id)a ;
 - (void) prepareForAnimatedBoundsChange:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - ({CGPoint=dd}) targetContentOffsetForProposedContentOffset:({CGPoint=dd})a ;
 - (void) _prepareToAnimateFromCollectionViewItems:(id)a atContentOffset:({CGPoint=dd})b toItems:(id)c atContentOffset:({CGPoint=dd})d ;
 - (id) finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a ;
 - (id) finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)a atIndexPath:(id)b ;
 - (id) finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)a atIndexPath:(id)b ;
 - (id) initialLayoutAttributesForAppearingItemAtIndexPath:(id)a ;
 - (id) initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)a atIndexPath:(id)b ;
 - (id) initialLayoutAttributesForAppearingDecorationElementOfKind:(id)a atIndexPath:(id)b ;
 - (void) _finalizeCollectionViewItemAnimations;
 - (void) finalizeAnimatedBoundsChange;
 - (@?) _animationForReusableView:(id)a toLayoutAttributes:(id)b type:(unsigned long long)c ;
 - (void) _prepareForTransitionToLayout:(id)a ;
 - (void) _prepareForTransitionFromLayout:(id)a ;
 - ({CGPoint=dd}) transitionContentOffsetForProposedContentOffset:({CGPoint=dd})a keyItemIndexPath:(id)b ;
 - (BOOL) _supportsAdvancedTransitionAnimations;
 - (void) _finalizeLayoutTransition;
 - (void) _didFinishLayoutTransitionAnimations:(BOOL)a ;
 - ({CGPoint=dd}) targetContentOffsetForProposedContentOffset:({CGPoint=dd})a withScrollingVelocity:({CGPoint=dd})b ;
 - (void) prepareForCollectionViewUpdates:(id)a ;
 - ({CGPoint=dd}) updatesContentOffsetForProposedContentOffset:({CGPoint=dd})a ;
 - (void) finalizeCollectionViewUpdates;
 - (id) _reorderingTargetItemIndexPathForPosition:({CGPoint=dd})a withPreviousIndexPath:(id)b ;
 - (id) _invalidationContextForReorderingTargetPosition:({CGPoint=dd})a targetIndexPaths:(id)b withPreviousPosition:({CGPoint=dd})c previousIndexPaths:(id)d ;
 - (id) _invalidationContextForEndingReorderingItemToFinalIndexPaths:(id)a previousIndexPaths:(id)b reorderingCancelled:(BOOL)c ;
 - (^{_UICollectionViewCompositionLayout=#}) _compositionLayout;
 - (@?) _animationForReusableView:(id)a toLayoutAttributes:(id)b ;
 - (void) prepareForTransitionToLayout:(id)a ;
 - (void) prepareForTransitionFromLayout:(id)a ;
 - (void) finalizeLayoutTransition;
 - (id) _indexPathsToDeleteForSupplementaryViewOfKind:(id)a ;
 - (id) _indexPathsToDeleteForDecorationViewOfKind:(id)a ;
 - (id) _indexPathsToInsertForSupplementaryViewOfKind:(id)a ;
 - (id) _indexPathsToInsertForDecorationViewOfKind:(id)a ;
 - ({CGPoint=dd}) _offsetInTopParentLayout:(^^{_UICollectionViewCompositionLayout=#})a ;
 - (id) snapshottedLayoutAttributeForItemAtIndexPath:(id)a ;
 - (void) registerNib:(id)a forDecorationViewOfKind:(id)b ;
 - (void) _setCollectionViewBoundsSize:({CGSize=dd})a ;
 - (void) _setDynamicAnimator:(id)a ;
 - (id) _dynamicAnimator;
 - (void) _setExternalObjectTable:(id)a forNibLoadingOfDecorationViewOfKind:(id)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _dynamicReferenceBounds;
 - (id) _elementKinds;
 - (void) _setPrepared:(BOOL)a ;
 - (id) _layoutAttributesForReorderedItemAtIndexPath:(id)a withTargetPosition:({CGPoint=dd})b ;
 - (long long) _sublayoutType;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _frame;


@end
