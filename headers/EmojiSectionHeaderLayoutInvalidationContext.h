
@interface EmojiSectionHeaderLayoutInvalidationContext : UICollectionViewFlowLayoutInvalidationContext {

    @"NSMutableIndexSet" _invalidatedSections;
    ^{__CFDictionary=} _headerWidthDict;
}

 - (void) dealloc;
 - (void) invalidateSectionHeaderInSection:(long long)awithPreferredWidth:(double)b;
 - (double) preferredWidthForHeaderInSection:(long long)a;
 - (id) invalidatedSections;


@end
