
@interface NSATSTypesetter : NSTypesetter {

    NSAttributedString* attributedString;
    {_NSRange="location"Q"length"Q} paragraphGlyphRange;
    {_NSRange="location"Q"length"Q} paragraphSeparatorGlyphRange;
    double lineFragmentPadding;
    NSLayoutManager* layoutManager;
    NSArray* textContainers;
    NSTextContainer* currentTextContainer;
    unsigned long long currentTextContainerIndex;
    {CGSize="width"d"height"d} currentTextContainerSize;
    NSParagraphStyle* currentParagraphStyle;
    [8^v] _atsReserved;
    id _private;
}
 + (void) initialize;
 + (id) sharedInstance;
 + (id) sharedTypesetter;
 + (BOOL) _allowsScreenFontKerning;

 - (void) dealloc;
 - (double) baselineOffsetInLayoutManager:(id)aglyphIndex:(unsigned long long)b;
 - (unsigned long long) actionForControlCharacterAtIndex:(unsigned long long)a;
 - ({_NSRange=QQ}) layoutCharactersInRange:({_NSRange=QQ})aforLayoutManager:(id)bmaximumNumberOfLineFragments:(unsigned long long)c;
 - (void) layoutGlyphsInLayoutManager:(id)astartingAtGlyphIndex:(unsigned long long)bmaxNumberOfLineFragments:(unsigned long long)cnextGlyphIndex:(^Q)d;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) lineFragmentRectForProposedRect:({CGRect={CGPoint=dd}{CGSize=dd}})aremainingRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (r*) _bidiLevels;
 - (^{__CTTypesetter=}) _ctTypesetter;
 - (void) _doBidiProcessing;
 - (long long) _baseWritingDirection;
 - (BOOL) _baselineRenderingMode;
 - (void) beginLineWithGlyphAtIndex:(unsigned long long)a;
 - (void) endLineWithGlyphRange:({_NSRange=QQ})a;
 - (void) _flushCachedObjects;
 - (void) beginParagraph;
 - (void) endParagraph;
 - (BOOL) _layoutLineFragmentStartingWithGlyphAtIndex:(^Q)acharacterIndex:(^Q)batPoint:(^{CGPoint=dd})crenderingContext:(^@)d;
 - (BOOL) _forceWordWrapping;
 - (void) _setForceWordWrapping:(BOOL)a;
 - (double) defaultTighteningFactor;
 - (void) setDefaultTighteningFactor:(double)a;
 - (void) _setBaselineRenderingMode:(BOOL)a;
 - (id) _getATSTypesetterGuts;
 - (BOOL) _usesScreenFonts;
 - (unsigned long long) _sweepDirectionForGlyphAtIndex:(long long)a;
 - (unsigned long long) layoutParagraphAtPoint:(^{CGPoint=dd})a;
 - (BOOL) shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned long long)a;
 - (BOOL) shouldBreakLineByHyphenatingBeforeCharacterAtIndex:(unsigned long long)a;
 - (float) hyphenationFactorForGlyphAtIndex:(unsigned long long)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) boundingBoxForControlGlyphAtIndex:(unsigned long long)aforTextContainer:(id)bproposedLineFragment:({CGRect={CGPoint=dd}{CGSize=dd}})cglyphPosition:({CGPoint=dd})dcharacterIndex:(unsigned long long)e;
 - (unsigned int) hyphenCharacterForGlyphAtIndex:(unsigned long long)a;
 - (^{?=^{?}{_NSRange=QQ}{_NSRange=QQ}ff^?^?dddddd{CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}{_NSRange=QQ}@dq{?=b4b1b1b1b4b4b1b1b1b1b2b1b10}[0^v]}) _allocateAuxData;
 - (^(?={?=dddq}{?={CGRect={CGPoint=dd}{CGSize=dd}}})) _lineFragmentRectForProposedRectArgs;


@end
