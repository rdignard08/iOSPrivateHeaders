
@interface UIKeyboardEmojiLayout : UICollectionViewFlowLayout {

    ^@ _attributes;
    ^d _headerWidths;
    long long _arrayLength;
}
 + (Class) invalidationContextClass;

 - (void) dealloc;
 - (id) layoutAttributesForElementsInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (BOOL) shouldInvalidateLayoutForPreferredLayoutAttributes:(id)a withOriginalAttributes:(id)b ;
 - (id) layoutAttributesForSupplementaryViewOfKind:(id)a atIndexPath:(id)b ;
 - (void) prepareLayout;
 - (void) invalidateLayoutWithContext:(id)a ;
 - (id) invalidationContextForBoundsChange:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) invalidationContextForPreferredLayoutAttributes:(id)a withOriginalAttributes:(id)b ;
 - (void) _setAttributes:(id)a ForSection:(long long)b ;
 - (BOOL) shouldInvalidateLayoutForBoundsChange:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
