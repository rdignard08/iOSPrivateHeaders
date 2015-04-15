
@interface _NSCachedAttributedString : NSMutableAttributedString {

    id _contents;
    NSAttributeDictionary* _baseAttributes;
    long long _length;
    unsigned long long _hashValue;
    ^{?=@q} _runs;
    long long _numRuns;
    long long _allocedRunsSize;
    long long _numHits;
}
 + (void) initialize;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (id) initWithString:(id)a attributes:(id)b ;
 - (id) initWithAttributedString:(id)a ;
 - (Vv) release;
 - (void) dealloc;
 - (void) finalize;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (id) string;
 - (id) attributesAtIndex:(unsigned long long)a effectiveRange:(^{_NSRange=QQ})b ;
 - (id) attributesAtIndex:(unsigned long long)a longestEffectiveRange:(^{_NSRange=QQ})b inRange:({_NSRange=QQ})c ;
 - (void) setAttributes:(id)a range:({_NSRange=QQ})b ;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (id) initWithString:(id)a ;
 - (unsigned long long) length;
 - (id) init;
 - (BOOL) _isStringDrawingTextStorage;
 - (BOOL) _baselineMode;
 - (void) cache;
 - (id) copyCachedInstance;


@end
