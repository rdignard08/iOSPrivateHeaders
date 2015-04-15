
@protocol UICollectionViewDataSource, UICollectionViewDelegate, UIKeyboardEmojiInput, UIKeyboardEmojiCategoryControl;
@interface UIKeyboardEmojiCollectionInputView : UIKBKeyView <UICollectionViewDataSource, UICollectionViewDelegate, UIKeyboardEmojiInput, UIKeyboardEmojiCategoryControl> {

    UIKeyboardEmojiCollectionView _collectionView;
    UICollectionViewFlowLayout _flowLayout;
    int _category;
    long long _currentSection;
    NSIndexPath _tappedSkinToneEmoji;
    UIKeyboardEmojiGraphicsTraits _emojiGraphicsTraits;
    BOOL _isDraggingInputView;
    @? _completionBlock;
    UIResponder<UIKBEmojiHitTestResponder> _hitTestResponder;
}

 - (@?) completionBlock;
 - (void) setCompletionBlock:(@?)a;
 - (void) dealloc;
 - (void) didMoveToWindow;
 - (void) setContentScaleFactor:(double)a;
 - (void) scrollViewDidScroll:(id)a;
 - (void) scrollViewWillBeginDragging:(id)a;
 - (void) scrollViewWillEndDragging:(id)awithVelocity:({CGPoint=dd})btargetContentOffset:(N^{CGPoint=dd})c;
 - (void) scrollViewDidEndDecelerating:(id)a;
 - (void) setHitTestResponder:(id)a;
 - (id) emojiBaseUnicodeString:(id)a;
 - (void) setTappedSkinToneEmoji:(id)a;
 - (BOOL) skinToneWasUsedForEmoji:(id)a;
 - (long long) didInputSubTree:(id)a;
 - (BOOL) _userHasSelectedSkinToneEmoji;
 - (id) selectedChildSkinToneEmoji:(id)a;
 - (id) tappedSkinToneEmoji;
 - (void) _setUserHasSelectedSkinToneEmoji:(BOOL)a;
 - (void) shouldDismissModalDisplayView:(id)a;
 - (id) hitTestResponder;
 - (double) snappedXOffsetForOffset:(double)a;
 - (long long) collectionView:(id)anumberOfItemsInSection:(long long)b;
 - (id) collectionView:(id)acellForItemAtIndexPath:(id)b;
 - (long long) numberOfSectionsInCollectionView:(id)a;
 - (id) collectionView:(id)aviewForSupplementaryElementOfKind:(id)batIndexPath:(id)c;
 - (void) reloadForCategory:(int)a;
 - (long long) reloadSectionForOffsetPercentage:(double)a;
 - (void) setCategory:(int)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})akeyplane:(id)bkey:(id)c;
 - (id) subTreeHitTest:({CGPoint=dd})a;
 - (void) willDisplayModalActionView:(id)awithSubTreeKeyView:(id)bcompletion:(@?)c;
 - ({UIEdgeInsets=dddd}) collectionView:(id)alayout:(id)binsetForSectionAtIndex:(long long)c;
 - (double) collectionView:(id)alayout:(id)bminimumLineSpacingForSectionAtIndex:(long long)c;
 - (double) collectionView:(id)alayout:(id)bminimumInteritemSpacingForSectionAtIndex:(long long)c;
 - (BOOL) isDraggingInputView;
 - (int) category;


@end
