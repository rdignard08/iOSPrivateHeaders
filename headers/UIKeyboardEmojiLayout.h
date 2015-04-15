
@interface UIKeyboardEmojiLayout : UICollectionViewFlowLayout {

    ^@ _attributes;
    ^d _headerWidths;
    q _arrayLength;
}
 + (Class) invalidationContextClass;

 - (void) dealloc;
 - (id) layoutAttributesForElementsInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) shouldInvalidateLayoutForPreferredLayoutAttributes:(id)awithOriginalAttributes:(id)b;
 - (id) layoutAttributesForSupplementaryViewOfKind:(id)aatIndexPath:(id)b;
 - (void) prepareLayout;
 - (void) invalidateLayoutWithContext:(id)a;
 - (id) invalidationContextForBoundsChange:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) invalidationContextForPreferredLayoutAttributes:(id)awithOriginalAttributes:(id)b;
 - (void) _setAttributes:(id)aForSection:(q)b;
 - (BOOL) shouldInvalidateLayoutForBoundsChange:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
