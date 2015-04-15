
@interface NSExtraLMData : NSObject {

    @"NSRunStorage" _attachmentSizesRun;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _currentAttachmentRect;
    Q _currentAttachmentIndex;
    id _fillHoleLock;
    @"NSRunStorage" _fragmentRunsExtras;
    id _temporaryAttributes;
    @"NSTextContainer" _firstTextContainer;
    ^{__CFDictionary=} _textContainerIndexes;
    ^{__CFDictionary=} _textContainerGlyphIndexes;
    q _typesetterBehavior;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _cachedFontBounds;
    d _cachedUnderlineThickness;
    d _cachedUnderlinePosition;
    d _cachedUnderlineAdjustment;
    {_NSRange="location"Q"length"Q} _cachedUnderlineRange;
    @"NSMutableArray" _blockRunsArray;
    d _hyphenationFactor;
    @"NSMutableArray" _insertionPointCache;
    {_NSGlyphTree="rootNode"^{_NSGlyphNode}"curNode"^{_NSGlyphNode}"curCharIndex"Q"curGlyphIndex"Q} _glyphTree;
    {_NSLayoutTree="rootNode"^{_NSLayoutNode}"curNode"^{_NSLayoutNode}"curGlyphIndex"Q"curLongitudinalOrigin"d"extraLineFragmentRect"{CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}}"extraLineFragmentUsedRect"{CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}}"glyphsPerLineEstimate"Q"offsetPerLineEstimate"d} _layoutTree;
    {_NSRange="location"Q"length"Q} _firstTextViewVisibleCharRange;
    {CGSize="width"d"height"d} _firstTextViewVisibleOffset;
    {_NSRange="location"Q"length"Q} _lastInvalidatedCharRange;
    d _lastInvalidatedLongitudinalPosition;
    @"NSTextContainer" _lastInvalidatedTextContainer;
    @"NSLayoutManagerTextBlockRowArrayCache" _rowArrayCache;
    {__lmFlags2="glyphCause"b6"layoutCause"b6"delegateRespondsToTempAttrs"b1"processingFirstTextViewVisible"b1"temporarySpacingChange"b1"alwaysDrawsActive"b1"usesOldShowPackedGlyphs"b1"drawsUnderlinesLikeWebKit"b1"drawsDebugBaselines"b1"reserved"b13} _lmFlags2;
}



@end
