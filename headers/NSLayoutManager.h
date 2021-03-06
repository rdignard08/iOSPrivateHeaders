
@protocol NSCoding;
@interface NSLayoutManager : NSObject <NSCoding> {

    NSTextStorage* _textStorage;
    NSGlyphGenerator* _glyphGenerator;
    NSTypesetter* _typesetter;
    NSMutableArray* _textContainers;
    NSStorage* _containerUsedRects;
    NSRunStorage* _containerRuns;
    NSTextContainer* _extraLineFragmentContainer;
    {__lmFlags="containersAreFull"b1"glyphsMightDrawOutsideLines"b1"backgroundLayoutEnabled"b1"resizingInProgress"b1"allowScreenFonts"b1"cachedRectArrayInUse"b1"displayInvalidationInProgress"b1"insertionPointNeedsUpdate"b1"layoutManagerInDirtyList"b1"originalFontOverride"b1"showInvisibleCharacters"b1"showControlCharacters"b1"delegateRespondsToDidInvalidate"b1"delegateRespondsToDidComplete"b1"glyphFormat"b2"textStorageRespondsToIsEditing"b1"notifyEditedInProgress"b1"containersChanged"b1"isGeneratingGlyphs"b1"hasNonGeneratedGlyphData"b1"syncAlignmentToDirection"b1"defaultAttachmentScaling"b2"usesFontLeading"b1"seenRightToLeft"b1"ignoresViewTransformations"b1"needToFlushGlyph"b1"flipsIfNeeded"b1"allowNonContig"b1"useNonContig"b1"inBackgroundLayout"b1} _lmFlags;
    id _delegate;
    unsigned short _textViewResizeDisableStack;
    unsigned short _displayInvalidationDisableStack;
    {_NSRange="location"Q"length"Q} _deferredDisplayCharRange;
    id _firstTextView;
    ^{CGRect={CGPoint=dd}{CGSize=dd}} _cachedRectArray;
    unsigned long long _cachedRectArrayCapacity;
    char* _glyphBuffer;
    unsigned long long _glyphBufferSize;
    {_NSRange="location"Q"length"Q} _cachedLocationNominalGlyphRange;
    unsigned long long _cachedLocationGlyphIndex;
    {CGPoint="x"d"y"d} _cachedLocation;
    {_NSRange="location"Q"length"Q} _cachedFontCharRange;
    NSFont* _cachedFont;
    unsigned long long _firstUnlaidGlyphIndex;
    unsigned long long _firstUnlaidCharIndex;
    {_NSRange="location"Q"length"Q} _newlyFilledGlyphRange;
    id _extraData;
}
@property (atomic, assign, readwrite) NSNumber* allowsOriginalFontMetricsOverride;
@property (nonatomic, assign, readwrite) NSTextStorage* textStorage;
@property (nonatomic, assign, readonly) NSArray* textContainers;
@property (nonatomic, assign, readwrite) NSNumber* delegate;
@property (nonatomic, assign, readwrite) NSNumber* showsInvisibleCharacters;
@property (nonatomic, assign, readwrite) NSNumber* showsControlCharacters;
@property (nonatomic, assign, readwrite) NSNumber* hyphenationFactor;
@property (nonatomic, assign, readwrite) NSNumber* usesFontLeading;
@property (nonatomic, assign, readwrite) NSNumber* allowsNonContiguousLayout;
@property (nonatomic, assign, readonly) NSNumber* hasNonContiguousLayout;
@property (nonatomic, assign, readonly) NSNumber* numberOfGlyphs;
@property (nonatomic, assign, readonly) NSNumber* extraLineFragmentRect;
@property (nonatomic, assign, readonly) NSNumber* extraLineFragmentUsedRect;
@property (nonatomic, assign, readonly) NSTextContainer* extraLineFragmentTextContainer;
 + (void) initialize;
 + (id) _defaultLinkAttributes;
 + (BOOL) _usesScreenFonts;
 + (BOOL) _ignoresViewTransformations;
 + (BOOL) _showsInvisibleCharacters;
 + (BOOL) _showsControlCharacters;

 - (id) _commonTextViewController;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (void) setDelegate:(id)a ;
 - (void) coordinateAccess:(@?)a ;
 - (void) addTemporaryAttribute:(id)a value:(id)b forCharacterRange:({_NSRange=QQ})c ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) boundingRectForGlyphRange:({_NSRange=QQ})a inTextContainer:(id)b ;
 - (void) ensureLayoutForBoundingRect:({CGRect={CGPoint=dd}{CGSize=dd}})a inTextContainer:(id)b ;
 - (BOOL) allowsNonContiguousLayout;
 - (void) setAllowsNonContiguousLayout:(BOOL)a ;
 - (void) enumerateLineFragmentsForGlyphRange:({_NSRange=QQ})a usingBlock:(@?)b ;
 - (void) enumerateEnclosingRectsForGlyphRange:({_NSRange=QQ})a withinSelectedGlyphRange:({_NSRange=QQ})b inTextContainer:(id)c usingBlock:(@?)d ;
 - (BOOL) hasNonContiguousLayout;
 - (void) removeTemporaryAttribute:(id)a forCharacterRange:({_NSRange=QQ})b ;
 - ({_NSRange=QQ}) rangeOfCharacterClusterAtIndex:(unsigned long long)a type:(long long)b ;
 - (void) enumerateEnclosingRectsForCharacterRange:({_NSRange=QQ})a withinSelectedCharacterRange:({_NSRange=QQ})b inTextContainer:(id)c usingBlock:(@?)d ;
 - (unsigned long long) characterIndexForPoint:({CGPoint=dd})a inTextContainer:(id)b fractionOfDistanceBetweenInsertionPoints:(^d)c ;
 - (long long) propertyForGlyphAtIndex:(unsigned long long)a ;
 - (unsigned long long) getLineFragmentInsertionPointsForCharacterAtIndex:(unsigned long long)a alternatePositions:(BOOL)b inDisplayOrder:(BOOL)c positions:(^d)d characterIndexes:(^Q)e ;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) delegate;
 - (id) textStorage;
 - (id) textContainerForGlyphAtIndex:(unsigned long long)a effectiveRange:(^{_NSRange=QQ})b ;
 - (id) typesetter;
 - (id) circleImageWithSize:({CGSize=dd})a bufferWidth:(double)b usingColor:(id)c ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) lineFragmentUsedRectForGlyphAtIndex:(unsigned long long)a effectiveRange:(^{_NSRange=QQ})b ;
 - ({CGPoint=dd}) locationForGlyphAtIndex:(unsigned long long)a ;
 - (long long) intAttribute:(long long)a forGlyphAtIndex:(unsigned long long)b ;
 - (^{CGRect={CGPoint=dd}{CGSize=dd}}) rectArrayForGlyphRange:({_NSRange=QQ})a withinSelectedGlyphRange:({_NSRange=QQ})b inTextContainer:(id)c rectCount:(^Q)d ;
 - (unsigned long long) characterIndexForGlyphAtIndex:(unsigned long long)a ;
 - (unsigned short) glyphAtIndex:(unsigned long long)a ;
 - (BOOL) _drawsUnderlinesLikeWebKit;
 - (BOOL) notShownAttributeForGlyphAtIndex:(unsigned long long)a ;
 - (void) _drawLineForGlyphRange:({_NSRange=QQ})a inContext:(^{CGContext=})b from:(double)c to:(double)d at:(double)e thickness:(double)f lineOrigin:({CGPoint=dd})g breakForDescenders:(BOOL)h flipped:(BOOL)i ;
 - ({_NSRange=QQ}) characterRangeForGlyphRange:({_NSRange=QQ})a actualGlyphRange:(^{_NSRange=QQ})b ;
 - (id) temporaryAttribute:(id)a atCharacterIndex:(unsigned long long)b effectiveRange:(^{_NSRange=QQ})c ;
 - (double) defaultLineHeightForFont:(id)a ;
 - ({_NSRange=QQ}) glyphRangeForCharacterRange:({_NSRange=QQ})a actualCharacterRange:(^{_NSRange=QQ})b ;
 - (double) defaultBaselineOffsetForFont:(id)a ;
 - (id) temporaryAttribute:(id)a atCharacterIndex:(unsigned long long)b longestEffectiveRange:(^{_NSRange=QQ})c inRange:({_NSRange=QQ})d ;
 - (void) drawUnderlineForGlyphRange:({_NSRange=QQ})a underlineType:(long long)b baselineOffset:(double)c lineFragmentRect:({CGRect={CGPoint=dd}{CGSize=dd}})d lineFragmentGlyphRange:({_NSRange=QQ})e containerOrigin:({CGPoint=dd})f ;
 - (void) drawStrikethroughForGlyphRange:({_NSRange=QQ})a strikethroughType:(long long)b baselineOffset:(double)c lineFragmentRect:({CGRect={CGPoint=dd}{CGSize=dd}})d lineFragmentGlyphRange:({_NSRange=QQ})e containerOrigin:({CGPoint=dd})f ;
 - (void) _showCGGlyphs:(r^S)a positions:(r^{CGPoint=dd})b count:(unsigned long long)c font:(id)d matrix:({CGAffineTransform=dddddd})e attributes:(id)f inContext:(^{CGContext=})g ;
 - (void) showAttachmentCell:(id)a inRect:({CGRect={CGPoint=dd}{CGSize=dd}})b characterIndex:(unsigned long long)c ;
 - (void) drawSpellingUnderlineForGlyphRange:({_NSRange=QQ})a spellingState:(long long)b inGlyphRange:({_NSRange=QQ})c lineFragmentRect:({CGRect={CGPoint=dd}{CGSize=dd}})d lineFragmentGlyphRange:({_NSRange=QQ})e containerOrigin:({CGPoint=dd})f ;
 - (void) _drawLineForGlyphRange:({_NSRange=QQ})a inContext:(^{CGContext=})b from:(double)c to:(double)d at:(double)e thickness:(double)f lineOrigin:({CGPoint=dd})g breakForDescenders:(BOOL)h ;
 - (void) _drawLineForGlyphRange:({_NSRange=QQ})a type:(long long)b baselineOffset:(double)c lineFragmentRect:({CGRect={CGPoint=dd}{CGSize=dd}})d lineFragmentGlyphRange:({_NSRange=QQ})e containerOrigin:({CGPoint=dd})f isStrikethrough:(BOOL)g ;
 - (void) _lineGlyphRange:({_NSRange=QQ})a type:(long long)b lineFragmentRect:({CGRect={CGPoint=dd}{CGSize=dd}})c lineFragmentGlyphRange:({_NSRange=QQ})d containerOrigin:({CGPoint=dd})e isStrikethrough:(BOOL)f ;
 - ({_NSRange=QQ}) _primitiveCharacterRangeForGlyphRange:({_NSRange=QQ})a ;
 - ({_NSRange=QQ}) _blockRangeForCharRange:({_NSRange=QQ})a ;
 - ({_NSRange=QQ}) _primitiveGlyphRangeForCharacterRange:({_NSRange=QQ})a ;
 - ({_NSRange=QQ}) _blockRowRangeForCharRange:({_NSRange=QQ})a completeRows:(^B)b ;
 - ({_NSRange=QQ}) _blockRowRangeForCharRange:({_NSRange=QQ})a ;
 - (id) attributedString;
 - (unsigned long long) _glyphIndexForCharacterIndex:(unsigned long long)a startOfRange:(BOOL)b okToFillHoles:(BOOL)c considerNulls:(BOOL)d ;
 - (void) _fillGlyphHoleForCharacterRange:({_NSRange=QQ})a startGlyphIndex:(unsigned long long)b desiredNumberOfCharacters:(unsigned long long)c ;
 - (id) glyphGenerator;
 - (void) setExtraLineFragmentRect:({CGRect={CGPoint=dd}{CGSize=dd}})a usedRect:({CGRect={CGPoint=dd}{CGSize=dd}})b textContainer:(id)c ;
 - (void) setTextContainer:(id)a forGlyphRange:({_NSRange=QQ})b ;
 - (void) setLineFragmentRect:({CGRect={CGPoint=dd}{CGSize=dd}})a forGlyphRange:({_NSRange=QQ})b usedRect:({CGRect={CGPoint=dd}{CGSize=dd}})c ;
 - (void) setLocation:({CGPoint=dd})a forStartOfGlyphRange:({_NSRange=QQ})b ;
 - (BOOL) _doOptimizedLayoutStartingAtGlyphIndex:(unsigned long long)a forCharacterRange:({_NSRange=QQ})b inTextContainer:(id)c lineLimit:(unsigned long long)d nextGlyphIndex:(^Q)e ;
 - (void) _invalidateGlyphsForExtendedCharacterRange:({_NSRange=QQ})a changeInLength:(long long)b includeBlocks:(BOOL)c ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) layoutRectForTextBlock:(id)a atIndex:(unsigned long long)b effectiveRange:(^{_NSRange=QQ})c ;
 - (void) setNotShownAttribute:(BOOL)a forGlyphAtIndex:(unsigned long long)b ;
 - (void) _doLayoutWithFullContainerStartingAtGlyphIndex:(unsigned long long)a nextGlyphIndex:(^Q)b ;
 - (void) _invalidateLayoutForExtendedCharacterRange:({_NSRange=QQ})a isSoft:(BOOL)b invalidateUsage:(BOOL)c ;
 - (void) _invalidateUsageForTextContainersInRange:({_NSRange=QQ})a ;
 - (void) _resizeTextViewForTextContainer:(id)a ;
 - (void) _invalidateInsertionPoint;
 - (void) invalidateDisplayForGlyphRange:({_NSRange=QQ})a ;
 - (void) _invalidateDisplayIfNeeded;
 - (void) _invalidateLayoutForExtendedCharacterRange:({_NSRange=QQ})a isSoft:(BOOL)b ;
 - (void) _fillLayoutHoleForCharacterRange:({_NSRange=QQ})a desiredNumberOfLines:(unsigned long long)b isSoft:(BOOL)c ;
 - (unsigned long long) _smallEncodingGlyphIndexForCharacterIndex:(unsigned long long)a startOfRange:(BOOL)b okToFillHoles:(BOOL)c considerNulls:(BOOL)d ;
 - (unsigned long long) glyphIndexForCharacterAtIndex:(unsigned long long)a ;
 - (void) _mergeLayoutHoles;
 - (void) _fillLayoutHoleAtIndex:(unsigned long long)a desiredNumberOfLines:(unsigned long long)b ;
 - (id) _lineFragmentDescriptionForGlyphRange:({_NSRange=QQ})a includeGlyphLocations:(BOOL)b ;
 - (id) _lineFragmentDescription:(BOOL)a ;
 - (id) _glyphDescriptionForGlyphRange:({_NSRange=QQ})a ;
 - (unsigned long long) _indexOfFirstGlyphInTextContainer:(id)a okToFillHoles:(BOOL)b ;
 - (void) _recalculateUsageForTextContainerAtIndex:(unsigned long long)a ;
 - (void) invalidateDisplayForCharacterRange:({_NSRange=QQ})a ;
 - (void) _growCachedRectArrayToSize:(unsigned long long)a ;
 - (^{CGRect={CGPoint=dd}{CGSize=dd}}) _rectArrayForRange:({_NSRange=QQ})a withinSelectionRange:({_NSRange=QQ})b rangeIsCharRange:(BOOL)c singleRectOnly:(BOOL)d fullLineRectsOnly:(BOOL)e inTextContainer:(id)f rectCount:(^Q)g rangeWithinContainer:(^{_NSRange=QQ})h glyphsDrawOutsideLines:(^B)i rectArray:(^{CGRect={CGPoint=dd}{CGSize=dd}})j rectArrayCapacity:(unsigned long long)k ;
 - (^{CGRect={CGPoint=dd}{CGSize=dd}}) _rectArrayForRange:({_NSRange=QQ})a withinSelectionRange:({_NSRange=QQ})b rangeIsCharRange:(BOOL)c singleRectOnly:(BOOL)d fullLineRectsOnly:(BOOL)e inTextContainer:(id)f rectCount:(^Q)g rangeWithinContainer:(^{_NSRange=QQ})h glyphsDrawOutsideLines:(^B)i ;
 - (id) substituteFontForFont:(id)a ;
 - ({CGSize=dd}) attachmentSizeForGlyphAtIndex:(unsigned long long)a ;
 - ({_NSRange=QQ}) _glyphRangeForCharacterRange:({_NSRange=QQ})a actualCharacterRange:(^{_NSRange=QQ})b okToFillHoles:(BOOL)c ;
 - ({_NSRange=QQ}) _firstPassGlyphRangeForBoundingRect:({CGRect={CGPoint=dd}{CGSize=dd}})a inTextContainer:(id)b hintGlyphRange:({_NSRange=QQ})c okToFillHoles:(BOOL)d ;
 - ({_NSRange=QQ}) _firstPassGlyphRangeForBoundingRect:({CGRect={CGPoint=dd}{CGSize=dd}})a inTextContainer:(id)b okToFillHoles:(BOOL)c ;
 - (void) _noteFirstTextViewVisibleCharacterRangeIfAfterIndex:(unsigned long long)a ;
 - (void) _setRowArrayCache:(id)a ;
 - (void) _markSelfAsDirtyForBackgroundLayout:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) boundsRectForTextBlock:(id)a atIndex:(unsigned long long)b effectiveRange:(^{_NSRange=QQ})c ;
 - (id) temporaryAttributesAtCharacterIndex:(unsigned long long)a longestEffectiveRange:(^{_NSRange=QQ})b inRange:({_NSRange=QQ})c ;
 - (^{CGRect={CGPoint=dd}{CGSize=dd}}) rectArrayForCharacterRange:({_NSRange=QQ})a withinSelectedCharacterRange:({_NSRange=QQ})b inTextContainer:(id)c rectCount:(^Q)d ;
 - (void) fillBackgroundRectArray:(r^{CGRect={CGPoint=dd}{CGSize=dd}})a count:(unsigned long long)b forCharacterRange:({_NSRange=QQ})c color:(id)d ;
 - (BOOL) _drawsDebugBaselines;
 - (BOOL) _hasSeenRightToLeft;
 - (void) showAttachment:(id)a inRect:({CGRect={CGPoint=dd}{CGSize=dd}})b textContainer:(id)c characterIndex:(unsigned long long)d ;
 - (void) underlineGlyphRange:({_NSRange=QQ})a underlineType:(long long)b lineFragmentRect:({CGRect={CGPoint=dd}{CGSize=dd}})c lineFragmentGlyphRange:({_NSRange=QQ})d containerOrigin:({CGPoint=dd})e ;
 - (void) showCGGlyphs:(r^S)a positions:(r^{CGPoint=dd})b count:(unsigned long long)c font:(id)d matrix:({CGAffineTransform=dddddd})e attributes:(id)f inContext:(^{CGContext=})g ;
 - (void) strikethroughGlyphRange:({_NSRange=QQ})a strikethroughType:(long long)b lineFragmentRect:({CGRect={CGPoint=dd}{CGSize=dd}})c lineFragmentGlyphRange:({_NSRange=QQ})d containerOrigin:({CGPoint=dd})e ;
 - (void) setBaselineOffset:(double)a forGlyphAtIndex:(unsigned long long)b ;
 - (void) _invalidateGlyphsForExtendedCharacterRange:({_NSRange=QQ})a changeInLength:(long long)b ;
 - (void) invalidateLayoutForCharacterRange:({_NSRange=QQ})a actualCharacterRange:(^{_NSRange=QQ})b ;
 - (void) _mergeGlyphHoles;
 - ({_NSRange=QQ}) _blockRangeForGlyphRange:({_NSRange=QQ})a ;
 - ({_NSRange=QQ}) _blockRowRangeForGlyphRange:({_NSRange=QQ})a completeRows:(^B)b ;
 - ({_NSRange=QQ}) _blockRowRangeForGlyphRange:({_NSRange=QQ})a ;
 - (id) _rowArrayCache;
 - ({_NSRange=QQ}) _extendedCharRangeForInvalidation:({_NSRange=QQ})a editedCharRange:({_NSRange=QQ})b ;
 - (void) _adjustCharacterIndicesForRawGlyphRange:({_NSRange=QQ})a byDelta:(long long)b ;
 - (BOOL) _canDoLayout;
 - (void) _fillGlyphHoleAtIndex:(unsigned long long)a desiredNumberOfCharacters:(unsigned long long)b ;
 - (unsigned long long) _smallEncodingGlyphIndexForCharacterIndex:(unsigned long long)a startOfRange:(BOOL)b okToFillHoles:(BOOL)c ;
 - (unsigned long long) _glyphIndexForCharacterIndex:(unsigned long long)a startOfRange:(BOOL)b okToFillHoles:(BOOL)c ;
 - (id) _containerDescription;
 - (id) _lineFragmentDescription;
 - (id) _glyphLocationDescription;
 - (id) _glyphDescription;
 - (id) _glyphHoleDescription;
 - (id) _layoutHoleDescription;
 - (id) _glyphTreeDescription;
 - (id) _layoutTreeDescription;
 - (id) _blockDescription;
 - (void) _updateUsageForTextContainer:(id)a addingUsedRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (^{_NSStoredContainerUsage={CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}{?=b1b1b1b29}{CGRect={CGPoint=dd}{CGSize=dd}}{_NSRange=QQ}}) _validatedStoredUsageForTextContainerAtIndex:(unsigned long long)a ;
 - (id) _selectedRanges;
 - (void) _fixSelectionAfterChangeInCharacterRange:({_NSRange=QQ})a changeInLength:(long long)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _boundingRectForGlyphRange:({_NSRange=QQ})a inTextContainer:(id)b fast:(BOOL)c fullLineRectsOnly:(BOOL)d ;
 - ({_NSRange=QQ}) _glyphRangeForBoundingRect:({CGRect={CGPoint=dd}{CGSize=dd}})a inTextContainer:(id)b fast:(BOOL)c okToFillHoles:(BOOL)d ;
 - (void) _firstTextViewChanged;
 - (void) _drawBackgroundForGlyphRange:({_NSRange=QQ})a atPoint:({CGPoint=dd})b ;
 - (id) selectedTextAttributesForCharacterAtIndex:(unsigned long long)a effectiveRange:(^{_NSRange=QQ})b ;
 - (char*) _packedGlyphs:(unsigned long long)a range:({_NSRange=QQ})b length:(^Q)c ;
 - (void) _drawGlyphsForGlyphRange:({_NSRange=QQ})a atPoint:({CGPoint=dd})b ;
 - (unsigned int) _glyphAtIndex:(unsigned long long)a characterIndex:(^Q)b glyphInscription:(^Q)c isValidIndex:(^B)d ;
 - (BOOL) _needToFlushGlyph;
 - (void) _setNeedToFlushGlyph:(BOOL)a ;
 - (void) _simpleInsertGlyph:(unsigned int)a atGlyphIndex:(unsigned long long)b characterIndex:(unsigned long long)c elastic:(BOOL)d ;
 - (void) _simpleDeleteGlyphsInRange:({_NSRange=QQ})a ;
 - (void) _insertGlyphs:(^I)a elasticAttributes:(^B)b count:(unsigned long long)c atGlyphIndex:(unsigned long long)d characterIndex:(unsigned long long)e ;
 - (void) _promoteGlyphStoreToFormat:(unsigned long long)a ;
 - (id) _attachmentSizesRun;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _currentAttachmentRect;
 - (unsigned long long) _currentAttachmentIndex;
 - (void) _setCurrentAttachmentRect:({CGRect={CGPoint=dd}{CGSize=dd}})a index:(unsigned long long)b ;
 - (void) _clearCurrentAttachmentSettings;
 - (void) _clearTemporaryAttributes;
 - (void) _clearTemporaryAttributesForCharacterRange:({_NSRange=QQ})a changeInLength:(long long)b ;
 - (void) setAllowsOriginalFontMetricsOverride:(BOOL)a ;
 - (BOOL) allowsOriginalFontMetricsOverride;
 - (void) _setHasSeenRightToLeft:(BOOL)a ;
 - (BOOL) flipsIfNeeded;
 - (void) setFlipsIfNeeded:(BOOL)a ;
 - (void) setLineFragmentRect:({CGRect={CGPoint=dd}{CGSize=dd}})a forGlyphRange:({_NSRange=QQ})b usedRect:({CGRect={CGPoint=dd}{CGSize=dd}})c baselineOffset:(double)d ;
 - (double) baselineOffsetForGlyphAtIndex:(unsigned long long)a ;
 - (BOOL) ignoresViewTransformations;
 - (void) setIgnoresViewTransformations:(BOOL)a ;
 - (BOOL) ignoresAntialiasThreshold;
 - (void) setIgnoresAntialiasThreshold:(BOOL)a ;
 - (BOOL) _alwaysDrawsActive;
 - (void) _setAlwaysDrawsActive:(BOOL)a ;
 - (id) _insertionPointHelperForGlyphAtIndex:(unsigned long long)a ;
 - (long long) getLineFragmentInsertionPointArraysForCharacterAtIndex:(unsigned long long)a inDisplayOrder:(BOOL)b positions:(^^d)c characterIndexes:(^^Q)d count:(^Q)e alternatePositions:(^^d)f characterIndexes:(^^Q)g count:(^Q)h ;
 - (id) _selectionRangesForInsertionPointRange:({_NSRange=QQ})a ;
 - (void) _setDrawsUnderlinesLikeWebKit:(BOOL)a ;
 - (void) _setDrawsDebugBaselines:(BOOL)a ;
 - (void) ensureLayoutForCharacterRange:({_NSRange=QQ})a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) usedRectForTextContainer:(id)a ;
 - (void) getFirstUnlaidCharacterIndex:(^Q)a glyphIndex:(^Q)b ;
 - (BOOL) synchronizesAlignmentToDirection;
 - (long long) typesetterBehavior;
 - (double) hyphenationFactor;
 - (id) textContainers;
 - (unsigned long long) getGlyphsInRange:({_NSRange=QQ})a glyphs:(^S)b properties:(^q)c characterIndexes:(^Q)d bidiLevels:(char*)e ;
 - (BOOL) usesFontLeading;
 - (void) insertGlyph:(unsigned int)a atGlyphIndex:(unsigned long long)b characterIndex:(unsigned long long)c ;
 - (void) setEllipsisGlyphAttribute:(BOOL)a forGlyphAtIndex:(unsigned long long)b ;
 - (void) setAttachmentSize:({CGSize=dd})a forGlyphRange:({_NSRange=QQ})b ;
 - (void) setUsesFontLeading:(BOOL)a ;
 - (void) setTypesetterBehavior:(long long)a ;
 - (void) setGlyphs:(r^S)a properties:(r^q)b characterIndexes:(r^Q)c font:(id)d forGlyphRange:({_NSRange=QQ})e ;
 - (void) insertGlyphs:(r^I)a length:(unsigned long long)b forStartingGlyphAtIndex:(unsigned long long)c characterIndex:(unsigned long long)d ;
 - (void) setIntAttribute:(long long)a value:(long long)b forGlyphAtIndex:(unsigned long long)c ;
 - (unsigned long long) layoutOptions;
 - (void) deleteGlyphsInRange:({_NSRange=QQ})a ;
 - (unsigned long long) numberOfGlyphs;
 - (void) _commonInit;
 - (void) setGlyphGenerator:(id)a ;
 - (void) insertTextContainer:(id)a atIndex:(unsigned long long)b ;
 - ({_NSRange=QQ}) _characterRangeCurrentlyInAndAfterContainer:(id)a ;
 - (void) textContainerChangedTextView:(id)a ;
 - (void) _setGlyphsPerLineEstimate:(unsigned long long)a offsetPerLineEstimate:(double)b ;
 - (void) invalidateGlyphsForCharacterRange:({_NSRange=QQ})a changeInLength:(long long)b actualCharacterRange:(^{_NSRange=QQ})c ;
 - (void) invalidateLayoutForCharacterRange:({_NSRange=QQ})a isSoft:(BOOL)b actualCharacterRange:(^{_NSRange=QQ})c ;
 - (void) _invalidateGlyphsForCharacterRange:({_NSRange=QQ})a editedCharacterRange:({_NSRange=QQ})b changeInLength:(long long)c actualCharacterRange:(^{_NSRange=QQ})d ;
 - (void) _primitiveInvalidateDisplayForGlyphRange:({_NSRange=QQ})a ;
 - (void) _forceDisplayToBeCorrectForViewsWithUnlaidGlyphs;
 - (void) textStorage:(id)a edited:(unsigned long long)b range:({_NSRange=QQ})c changeInLength:(long long)d invalidatedRange:({_NSRange=QQ})e ;
 - (void) ensureGlyphsForCharacterRange:({_NSRange=QQ})a ;
 - ({_NSRange=QQ}) glyphRangeForBoundingRect:({CGRect={CGPoint=dd}{CGSize=dd}})a inTextContainer:(id)b ;
 - (void) ensureLayoutForGlyphRange:({_NSRange=QQ})a ;
 - (void) _primitiveDeleteGlyphsInRange:({_NSRange=QQ})a ;
 - (unsigned short) glyphAtIndex:(unsigned long long)a isValidIndex:(^B)b ;
 - (unsigned long long) getGlyphsInRange:({_NSRange=QQ})a glyphs:(^I)b characterIndexes:(^Q)c glyphInscriptions:(^Q)d elasticBits:(^B)e bidiLevels:(char*)f ;
 - (unsigned long long) firstUnlaidCharacterIndex;
 - (unsigned long long) firstUnlaidGlyphIndex;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) lineFragmentUsedRectForGlyphAtIndex:(unsigned long long)a effectiveRange:(^{_NSRange=QQ})b withoutAdditionalLayout:(BOOL)c ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) lineFragmentRectForGlyphAtIndex:(unsigned long long)a effectiveRange:(^{_NSRange=QQ})b ;
 - (double) fractionOfDistanceThroughGlyphForPoint:({CGPoint=dd})a inTextContainer:(id)b ;
 - (unsigned long long) glyphIndexForPoint:({CGPoint=dd})a inTextContainer:(id)b ;
 - (unsigned long long) glyphIndexForPoint:({CGPoint=dd})a inTextContainer:(id)b fractionOfDistanceThroughGlyph:(^d)c ;
 - (id) temporaryAttributesAtCharacterIndex:(unsigned long long)a effectiveRange:(^{_NSRange=QQ})b ;
 - (BOOL) usesScreenFonts;
 - (void) setTextStorage:(id)a ;
 - (void) replaceTextStorage:(id)a ;
 - (id) _glyphGenerator;
 - (void) _setGlyphGenerator:(id)a ;
 - (void) setTypesetter:(id)a ;
 - (void) addTextContainer:(id)a ;
 - (void) removeTextContainerAtIndex:(unsigned long long)a ;
 - (void) textContainerChangedGeometry:(id)a ;
 - (void) textContainerChangedTextView:(id)a fromTextView:(id)b ;
 - (void) _setGlyphsPerLineEstimate:(unsigned long long)a integerOffsetPerLineEstimate:(unsigned long long)b ;
 - (void) setBackgroundLayoutEnabled:(BOOL)a ;
 - (BOOL) backgroundLayoutEnabled;
 - (void) setUsesScreenFonts:(BOOL)a ;
 - (void) setShowsInvisibleCharacters:(BOOL)a ;
 - (BOOL) showsInvisibleCharacters;
 - (void) setShowsControlCharacters:(BOOL)a ;
 - (BOOL) showsControlCharacters;
 - (void) setHyphenationFactor:(double)a ;
 - (BOOL) backgroundColorProvidesOpaqueSurface;
 - (void) processEditingForTextStorage:(id)a edited:(unsigned long long)b range:({_NSRange=QQ})c changeInLength:(long long)d invalidatedRange:({_NSRange=QQ})e ;
 - (void) ensureGlyphsForGlyphRange:({_NSRange=QQ})a ;
 - (void) ensureLayoutForTextContainer:(id)a ;
 - (void) replaceGlyphAtIndex:(unsigned long long)a withGlyph:(unsigned int)b ;
 - (void) setCharacterIndex:(unsigned long long)a forGlyphAtIndex:(unsigned long long)b ;
 - (void) invalidateGlyphsOnLayoutInvalidationForGlyphRange:({_NSRange=QQ})a ;
 - (BOOL) isValidGlyphIndex:(unsigned long long)a ;
 - (unsigned long long) getGlyphsInRange:({_NSRange=QQ})a glyphs:(^I)b characterIndexes:(^Q)c glyphInscriptions:(^Q)d elasticBits:(^B)e ;
 - (unsigned long long) getGlyphs:(^I)a range:({_NSRange=QQ})b ;
 - (void) setLocation:({CGPoint=dd})a forStartOfGlyphRange:({_NSRange=QQ})b coalesceRuns:(BOOL)c ;
 - (void) setLocations:(^{CGPoint=dd})a startingGlyphIndexes:(^Q)b count:(unsigned long long)c forGlyphRange:({_NSRange=QQ})d ;
 - (void) setDrawsOutsideLineFragment:(BOOL)a forGlyphAtIndex:(unsigned long long)b ;
 - (id) textContainerForGlyphAtIndex:(unsigned long long)a effectiveRange:(^{_NSRange=QQ})b withoutAdditionalLayout:(BOOL)c ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) lineFragmentRectForGlyphAtIndex:(unsigned long long)a effectiveRange:(^{_NSRange=QQ})b withoutAdditionalLayout:(BOOL)c ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) lineFragmentUsedRectForGlyphAtIndex:(unsigned long long)a effectiveRange:(^{_NSRange=QQ})b allowLayout:(BOOL)c ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) extraLineFragmentRect;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) extraLineFragmentUsedRect;
 - (id) extraLineFragmentTextContainer;
 - (BOOL) drawsOutsideLineFragmentForGlyphAtIndex:(unsigned long long)a ;
 - ({_NSRange=QQ}) truncatedGlyphRangeInLineFragmentForGlyphAtIndex:(unsigned long long)a ;
 - (void) setLayoutRect:({CGRect={CGPoint=dd}{CGSize=dd}})a forTextBlock:(id)b glyphRange:({_NSRange=QQ})c ;
 - (void) setBoundsRect:({CGRect={CGPoint=dd}{CGSize=dd}})a forTextBlock:(id)b glyphRange:({_NSRange=QQ})c ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) layoutRectForTextBlock:(id)a glyphRange:({_NSRange=QQ})b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) boundsRectForTextBlock:(id)a glyphRange:({_NSRange=QQ})b ;
 - ({_NSRange=QQ}) glyphRangeForTextContainer:(id)a ;
 - ({_NSRange=QQ}) rangeOfNominallySpacedGlyphsContainingIndex:(unsigned long long)a ;
 - ({_NSRange=QQ}) glyphRangeForBoundingRectWithoutAdditionalLayout:({CGRect={CGPoint=dd}{CGSize=dd}})a inTextContainer:(id)b ;
 - (void) setTemporaryAttributes:(id)a forCharacterRange:({_NSRange=QQ})b ;
 - (void) addTemporaryAttributes:(id)a forCharacterRange:({_NSRange=QQ})b ;
 - (id) _temporaryAttribute:(id)a atCharacterIndex:(unsigned long long)b effectiveRange:(^{_NSRange=QQ})c ;
 - (id) _temporaryAttribute:(id)a atCharacterIndex:(unsigned long long)b longestEffectiveRange:(^{_NSRange=QQ})c inRange:({_NSRange=QQ})d ;
 - (id) _temporaryAttributesAtCharacterIndex:(unsigned long long)a longestEffectiveRange:(^{_NSRange=QQ})b inRange:({_NSRange=QQ})c ;
 - (void) setSynchronizesAlignmentToDirection:(BOOL)a ;
 - (void) drawGlyphsForGlyphRange:({_NSRange=QQ})a atPoint:({CGPoint=dd})b ;
 - (void) drawBackgroundForGlyphRange:({_NSRange=QQ})a atPoint:({CGPoint=dd})b ;


@end
