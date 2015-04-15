
@interface UIKeyboardEmojiGraphicsTraits : NSObject {

    double _emojiKeyWidth;
    double _minimumLineSpacing;
    double _minimumInteritemSpacing;
    double _columnOffset;
    double _sectionOffset;
    double _categoryHeaderHeight;
    double _categoryHeaderLeftPadding;
    double _categorySelectedCirPadding;
    double _categorySelectedCirWidth;
    double _scrubViewTopPadding;
    double _categoryHeaderFontSize;
    long long _prepolulatedRecentCount;
    double _inputViewLeftMostPadding;
    double _inputViewRightMostPadding;
    double _rightBiasPercentage;
    double _alertTextWidth;
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

 - (double) emojiKeyWidth;
 - (double) minimumLineSpacing;
 - ({CGSize=dd}) fakeEmojiKeySize;
 - (double) alertTextWidth;
 - (long long) prepolulatedRecentCount;
 - (double) categoryHeaderFontSize;
 - (double) sectionOffset;
 - (double) categoryHeaderHeight;
 - (double) inputViewLeftMostPadding;
 - (double) inputViewRightMostPadding;
 - (double) minimumInteritemSpacing;
 - (double) columnOffset;
 - (double) scrubViewTopPadding;
 - (double) categorySelectedCirWidth;
 - (double) categorySelectedCirPadding;
 - (id) initWithScreenTrait:(id)a;
 - (double) categoryHeaderLeftPadding;
 - (double) rightBiasPercentage;


@end
