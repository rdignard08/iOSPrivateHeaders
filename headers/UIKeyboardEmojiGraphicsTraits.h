
@interface UIKeyboardEmojiGraphicsTraits : NSObject {

    d _emojiKeyWidth;
    d _minimumLineSpacing;
    d _minimumInteritemSpacing;
    d _columnOffset;
    d _sectionOffset;
    d _categoryHeaderHeight;
    d _categoryHeaderLeftPadding;
    d _categorySelectedCirPadding;
    d _categorySelectedCirWidth;
    d _scrubViewTopPadding;
    d _categoryHeaderFontSize;
    q _prepolulatedRecentCount;
    d _inputViewLeftMostPadding;
    d _inputViewRightMostPadding;
    d _rightBiasPercentage;
    d _alertTextWidth;
    {CGSize="width"d"height"d} _fakeEmojiKeySize;
}
@property (nonatomic, assign, readonly) NSNumber* emojiKeyWidth;
@property (nonatomic, assign, readonly) NSNumber* minimumLineSpacing;
@property (nonatomic, assign, readonly) NSNumber* minimumInteritemSpacing;
@property (nonatomic, assign, readonly) NSNumber* columnOffset;
@property (nonatomic, assign, readonly) NSNumber* sectionOffset;
@property (nonatomic, assign, readonly) NSNumber* categoryHeaderHeight;
@property (nonatomic, assign, readonly) NSNumber* categoryHeaderLeftPadding;
@property (nonatomic, assign, readonly) NSNumber* categorySelectedCirPadding;
@property (nonatomic, assign, readonly) NSNumber* categorySelectedCirWidth;
@property (nonatomic, assign, readonly) NSNumber* scrubViewTopPadding;
@property (nonatomic, assign, readonly) NSNumber* fakeEmojiKeySize;
@property (nonatomic, assign, readonly) NSNumber* categoryHeaderFontSize;
@property (nonatomic, assign, readonly) NSNumber* prepolulatedRecentCount;
@property (nonatomic, assign, readonly) NSNumber* inputViewLeftMostPadding;
@property (nonatomic, assign, readonly) NSNumber* inputViewRightMostPadding;
@property (nonatomic, assign, readonly) NSNumber* rightBiasPercentage;
@property (nonatomic, assign, readonly) NSNumber* alertTextWidth;
 + (id) emojiGraphicsTraitsWithScreenTraits:(id)a;

 - (d) emojiKeyWidth;
 - (d) minimumLineSpacing;
 - ({CGSize=dd}) fakeEmojiKeySize;
 - (d) alertTextWidth;
 - (q) prepolulatedRecentCount;
 - (d) categoryHeaderFontSize;
 - (d) sectionOffset;
 - (d) categoryHeaderHeight;
 - (d) inputViewLeftMostPadding;
 - (d) inputViewRightMostPadding;
 - (d) minimumInteritemSpacing;
 - (d) columnOffset;
 - (d) scrubViewTopPadding;
 - (d) categorySelectedCirWidth;
 - (d) categorySelectedCirPadding;
 - (id) initWithScreenTrait:(id)a;
 - (d) categoryHeaderLeftPadding;
 - (d) rightBiasPercentage;


@end
