
@protocol UICollectionViewDataSource, UICollectionViewDelegate, UIKeyboardEmojiInput, UIKeyboardEmojiCategoryControl;
@interface UIKeyboardEmojiCollectionInputView : UIKBKeyView <UICollectionViewDataSource, UICollectionViewDelegate, UIKeyboardEmojiInput, UIKeyboardEmojiCategoryControl> {

    UIKeyboardEmojiCollectionView* _collectionView;
    UICollectionViewFlowLayout* _flowLayout;
    int _category;
    long long _currentSection;
    NSIndexPath* _tappedSkinToneEmoji;
    UIKeyboardEmojiGraphicsTraits* _emojiGraphicsTraits;
    BOOL _isDraggingInputView;
    @? _completionBlock;
    UIResponder<UIKBEmojiHitTestResponder>* _hitTestResponder;
}

 - (@?) completionBlock;
 - (void) setCompletionBlock:(@?)a ;
 - (void) dealloc;
 - (void) didMoveToWindow;
 - (void) setContentScaleFactor:(double)a ;
 - (void) scrollViewDidScroll:(id)a ;
 - (void) scrollViewWillBeginDragging:(id)a ;
 - (void) scrollViewWillEndDragging:(id)a withVelocity:({CGPoint=dd})b targetContentOffset:(N^{CGPoint=dd})c ;
 - (void) scrollViewDidEndDecelerating:(id)a ;
 - (void) setHitTestResponder:(id)a ;
 - (id) emojiBaseUnicodeString:(id)a ;
 - (void) setTappedSkinToneEmoji:(id)a ;
 - (BOOL) skinToneWasUsedForEmoji:(id)a ;
 - (long long) didInputSubTree:(id)a ;
 - (BOOL) _userHasSelectedSkinToneEmoji;
 - (id) selectedChildSkinToneEmoji:(id)a ;
 - (id) tappedSkinToneEmoji;
 - (void) _setUserHasSelectedSkinToneEmoji:(BOOL)a ;
 - (void) shouldDismissModalDisplayView:(id)a ;
 - (id) hitTestResponder;
 - (double) snappedXOffsetForOffset:(double)a ;
 - (long long) collectionView:(id)a numberOfItemsInSection:(long long)b ;
 - (id) collectionView:(id)a cellForItemAtIndexPath:(id)b ;
 - (long long) numberOfSectionsInCollectionView:(id)a ;
 - (id) collectionView:(id)a viewForSupplementaryElementOfKind:(id)b atIndexPath:(id)c ;
 - (void) reloadForCategory:(int)a ;
 - (long long) reloadSectionForOffsetPercentage:(double)a ;
 - (void) setCategory:(int)a ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a keyplane:(id)b key:(id)c ;
 - (id) subTreeHitTest:({CGPoint=dd})a ;
 - (void) willDisplayModalActionView:(id)a withSubTreeKeyView:(id)b completion:(@?)c ;
 - ({UIEdgeInsets=dddd}) collectionView:(id)a layout:(id)b insetForSectionAtIndex:(long long)c ;
 - (double) collectionView:(id)a layout:(id)b minimumLineSpacingForSectionAtIndex:(long long)c ;
 - (double) collectionView:(id)a layout:(id)b minimumInteritemSpacingForSectionAtIndex:(long long)c ;
 - (BOOL) isDraggingInputView;
 - (int) category;


@end
