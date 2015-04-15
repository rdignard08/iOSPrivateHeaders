
@interface NSATSGlyphStorage : CTGlyphStorageInterface {

    ^{__CTGlyphStorage=} _glyphStorage;
    ^{__CFArray=} _masterRuns;
    NSATSTypesetter* _typesetter;
    ^{?=@@qqdddd{CGRect={CGPoint=dd}{CGSize=dd}}{?=b1b1b1b1b1b1b1b1b24}} _runs;
    long long _numRuns;
    long long _runBufferSize;
    {_NSRange="location"Q"length"Q} _glyphRange;
    {_NSRange="location"Q"length"Q} _characterRange;
    long long _bufferSize;
    NSATSGlyphStorage* _parent;
    ^{__CFSet=} _children;
    long long _paraEndElasticCharIndex;
    double _paraEndElasticCharWidth;
    NSString* _textString;
    ^{?=q[0{?=S{CGSize=dd}Iqq}]} _stack;
    r^{?=@@qqdddd{CGRect={CGPoint=dd}{CGSize=dd}}{?=b1b1b1b1b1b1b1b1b24}} _lastElasticRun;
    long long _lastElasticRunLocation;
    long long _totalAbsorbedCount;
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
 - (id) initWithTypesetter:(id)a ;
 - (void) setGlyphRange:({_NSRange=QQ})a characterRange:({_NSRange=QQ})b ;
 - (^{__CTTypesetter=}) createCTTypesetter;
 - (void) _flushCachedObjects;
 - (id) childGlyphStorageWithCharacterRange:({_NSRange=QQ})a ;
 - (^{__CTRun=}) _createEllipsisRunWithStringRange:({?=qq})a attributes:(^{__CFDictionary=})b ;
 - (BOOL) _resolvePositionalStakeGlyphsForLineFragment:(^{__CTLine=})a lineFragmentRect:({CGRect={CGPoint=dd}{CGSize=dd}})b minPosition:(double)c maxPosition:(double)d maxLineFragmentWidth:(double)e breakHint:(^q)f ;
 - ({_NSRange=QQ}) _collectElasticRangeSurroundingCharacterAtIndex:(long long)a minimumCharacterIndex:(long long)b ;
 - (double) _widthForStringRange:({_NSRange=QQ})a ;
 - (r^{?=@@qqdddd{CGRect={CGPoint=dd}{CGSize=dd}}{?=b1b1b1b1b1b1b1b1b24}}) _attributeRunForCharacterAtIndex:(long long)a ;
 - (void) disposeGlyphStack;
 - (^{__CTGlyphStorage=}) createCopy:({?=qq})a ;
 - (void) getCustomAdvance:(^{CGSize=dd})a forIndex:(long long)b ;
 - (void) setAbsorbedCount:(long long)a forIndex:(long long)b ;
 - (void) setProps:(unsigned int)a forIndex:(long long)b ;
 - (void) setGlyphID:(unsigned short)a forIndex:(long long)b ;
 - (void) setAdvance:({CGSize=dd})a forIndex:(long long)b ;
 - (void) setStringIndex:(long long)a forIndex:(long long)b ;
 - (void) insertGlyphs:({?=qq})a ;
 - (void) swapGlyph:(long long)a withIndex:(long long)b ;
 - (void) moveGlyphsTo:(long long)a from:({?=qq})b ;
 - (void) initGlyphStack:(long long)a ;
 - (void) pushGlyph:(long long)a ;
 - (void) popGlyph:(long long)a ;


@end
