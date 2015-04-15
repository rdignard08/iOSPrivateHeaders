
@interface NSATSGlyphStorage : CTGlyphStorageInterface {

    ^{__CTGlyphStorage=} _glyphStorage;
    ^{__CFArray=} _masterRuns;
    @"NSATSTypesetter" _typesetter;
    ^{?=@@qqdddd{CGRect={CGPoint=dd}{CGSize=dd}}{?=b1b1b1b1b1b1b1b1b24}} _runs;
    q _numRuns;
    q _runBufferSize;
    {_NSRange="location"Q"length"Q} _glyphRange;
    {_NSRange="location"Q"length"Q} _characterRange;
    q _bufferSize;
    @"NSATSGlyphStorage" _parent;
    ^{__CFSet=} _children;
    q _paraEndElasticCharIndex;
    d _paraEndElasticCharWidth;
    @"NSString" _textString;
    ^{?=q[0{?=S{CGSize=dd}Iqq}]} _stack;
    r^{?=@@qqdddd{CGRect={CGPoint=dd}{CGSize=dd}}{?=b1b1b1b1b1b1b1b1b24}} _lastElasticRun;
    q _lastElasticRunLocation;
    q _totalAbsorbedCount;
    {?="_hasNonNominalGlyph"b1"_hasPositionalStake"b1"_hasBidiRun"b1"_isEllipsisStorage"b1"_hasNonNominalStringIndexes"b1"_isUnordered"b1"_hasTotalAbsorbedCount"b1"_reserved"b25} _gFlags;
}
 + (id) allocWithZone:(^{_NSZone=})a;

 - (Vv) release;
 - (void) dealloc;
 - (void) finalize;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (void) _invalidate;
 - (id) typesetter;
 - (id) initWithTypesetter:(id)a;
 - (void) setGlyphRange:({_NSRange=QQ})acharacterRange:({_NSRange=QQ})b;
 - (^{__CTTypesetter=}) createCTTypesetter;
 - (void) _flushCachedObjects;
 - (id) childGlyphStorageWithCharacterRange:({_NSRange=QQ})a;
 - (^{__CTRun=}) _createEllipsisRunWithStringRange:({?=qq})aattributes:(^{__CFDictionary=})b;
 - (BOOL) _resolvePositionalStakeGlyphsForLineFragment:(^{__CTLine=})alineFragmentRect:({CGRect={CGPoint=dd}{CGSize=dd}})bminPosition:(d)cmaxPosition:(d)dmaxLineFragmentWidth:(d)ebreakHint:(^q)f;
 - ({_NSRange=QQ}) _collectElasticRangeSurroundingCharacterAtIndex:(q)aminimumCharacterIndex:(q)b;
 - (d) _widthForStringRange:({_NSRange=QQ})a;
 - (r^{?=@@qqdddd{CGRect={CGPoint=dd}{CGSize=dd}}{?=b1b1b1b1b1b1b1b1b24}}) _attributeRunForCharacterAtIndex:(q)a;
 - (void) disposeGlyphStack;
 - (^{__CTGlyphStorage=}) createCopy:({?=qq})a;
 - (void) getCustomAdvance:(^{CGSize=dd})aforIndex:(q)b;
 - (void) setAbsorbedCount:(q)aforIndex:(q)b;
 - (void) setProps:(I)aforIndex:(q)b;
 - (void) setGlyphID:(S)aforIndex:(q)b;
 - (void) setAdvance:({CGSize=dd})aforIndex:(q)b;
 - (void) setStringIndex:(q)aforIndex:(q)b;
 - (void) insertGlyphs:({?=qq})a;
 - (void) swapGlyph:(q)awithIndex:(q)b;
 - (void) moveGlyphsTo:(q)afrom:({?=qq})b;
 - (void) initGlyphStack:(q)a;
 - (void) pushGlyph:(q)a;
 - (void) popGlyph:(q)a;


@end
