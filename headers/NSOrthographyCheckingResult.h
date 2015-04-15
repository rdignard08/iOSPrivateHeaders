
@interface NSOrthographyCheckingResult : NSTextCheckingResult {

    {_NSRange="location"Q"length"Q} _range;
    @"NSOrthography" _orthography;
}

 - (id) resultByAdjustingRangesWithOffset:(q)a;
 - (BOOL) _adjustRangesWithOffset:(q)a;
 - (id) orthography;
 - (id) initWithRange:({_NSRange=QQ})aorthography:(id)b;
 - (id) description;
 - (void) dealloc;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - ({_NSRange=QQ}) range;
 - (Q) resultType;


@end
