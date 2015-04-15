
@interface NSATSTypesetter : NSTypesetter {

    @"NSAttributedString" attributedString;
    {_NSRange="location"Q"length"Q} paragraphGlyphRange;
    {_NSRange="location"Q"length"Q} paragraphSeparatorGlyphRange;
    d lineFragmentPadding;
    @"NSLayoutManager" layoutManager;
    @"NSArray" textContainers;
    @"NSTextContainer" currentTextContainer;
    Q currentTextContainerIndex;
    {CGSize="width"d"height"d} currentTextContainerSize;
    @"NSParagraphStyle" currentParagraphStyle;
    [8^v] _atsReserved;
    id _private;
}
 + (void) initialize;
 + (id) sharedInstance;
 + (id) sharedTypesetter;
 + (BOOL) _allowsScreenFontKerning;

 - (void) dealloc;
 - (d) baselineOffsetInLayoutManager:(id)aglyphIndex:(Q)b;
 - (Q) actionForControlCharacterAtIndex:(Q)a;
 - ({_NSRange=QQ}) layoutCharactersInRange:({_NSRange=QQ})aforLayoutManager:(id)bmaximumNumberOfLineFragments:(Q)c;
 - (void) layoutGlyphsInLayoutManager:(id)astartingAtGlyphIndex:(Q)bmaxNumberOfLineFragments:(Q)cnextGlyphIndex:(^Q)d;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) lineFragmentRectForProposedRect:({CGRect={CGPoint=dd}{CGSize=dd}})aremainingRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (r*) _bidiLevels;
 - (^{__CTTypesetter=}) _ctTypesetter;
 - (void) _doBidiProcessing;
 - (q) _baseWritingDirection;
 - (BOOL) _baselineRenderingMode;
 - (void) beginLineWithGlyphAtIndex:(Q)a;
 - (void) endLineWithGlyphRange:({_NSRange=QQ})a;
 - (void) _flushCachedObjects;
 - (void) beginParagraph;
 - (void) endParagraph;
 - (BOOL) _layoutLineFragmentStartingWithGlyphAtIndex:(^Q)acharacterIndex:(^Q)batPoint:(^{CGPoint=dd})crenderingContext:(^@)d;
 - (BOOL) _forceWordWrapping;
 - (void) _setForceWordWrapping:(BOOL)a;
 - (d) defaultTighteningFactor;
 - (void) setDefaultTighteningFactor:(d)a;
 - (void) _setBaselineRenderingMode:(BOOL)a;
 - (id) _getATSTypesetterGuts;
 - (BOOL) _usesScreenFonts;
 - (Q) _sweepDirectionForGlyphAtIndex:(q)a;
 - (Q) layoutParagraphAtPoint:(^{CGPoint=dd})a;
 - (BOOL) shouldBreakLineByWordBeforeCharacterAtIndex:(Q)a;
 - (BOOL) shouldBreakLineByHyphenatingBeforeCharacterAtIndex:(Q)a;
 - (f) hyphenationFactorForGlyphAtIndex:(Q)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) boundingBoxForControlGlyphAtIndex:(Q)aforTextContainer:(id)bproposedLineFragment:({CGRect={CGPoint=dd}{CGSize=dd}})cglyphPosition:({CGPoint=dd})dcharacterIndex:(Q)e;
 - (I) hyphenCharacterForGlyphAtIndex:(Q)a;
 - (^{?=^{?}{_NSRange=QQ}{_NSRange=QQ}ff^?^?dddddd{CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}{_NSRange=QQ}@dq{?=b4b1b1b1b4b4b1b1b1b1b2b1b10}[0^v]}) _allocateAuxData;
 - (^(?={?=dddq}{?={CGRect={CGPoint=dd}{CGSize=dd}}})) _lineFragmentRectForProposedRectArgs;


@end
