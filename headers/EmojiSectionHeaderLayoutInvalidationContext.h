
@interface EmojiSectionHeaderLayoutInvalidationContext : UICollectionViewFlowLayoutInvalidationContext {

    @"NSMutableIndexSet" _invalidatedSections;
    ^{__CFDictionary=} _headerWidthDict;
}

 - (void) dealloc;
 - (void) invalidateSectionHeaderInSection:(q)awithPreferredWidth:(d)b;
 - (d) preferredWidthForHeaderInSection:(q)a;
 - (id) invalidatedSections;


@end
