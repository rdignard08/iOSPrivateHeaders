
@interface _NSCachedAttributedString : NSMutableAttributedString {

    id _contents;
    @"NSAttributeDictionary" _baseAttributes;
    q _length;
    Q _hashValue;
    ^{?=@q} _runs;
    q _numRuns;
    q _allocedRunsSize;
    q _numHits;
}
 + (void) initialize;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (id) initWithString:(id)aattributes:(id)b;
 - (id) initWithAttributedString:(id)a;
 - (Vv) release;
 - (void) dealloc;
 - (void) finalize;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (id) string;
 - (id) attributesAtIndex:(Q)aeffectiveRange:(^{_NSRange=QQ})b;
 - (id) attributesAtIndex:(Q)alongestEffectiveRange:(^{_NSRange=QQ})binRange:({_NSRange=QQ})c;
 - (void) setAttributes:(id)arange:({_NSRange=QQ})b;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (id) initWithString:(id)a;
 - (Q) length;
 - (id) init;
 - (BOOL) _isStringDrawingTextStorage;
 - (BOOL) _baselineMode;
 - (void) cache;
 - (id) copyCachedInstance;


@end
