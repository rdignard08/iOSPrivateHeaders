
@interface NSSpellCheckingResult : NSTextCheckingResult {

    {_NSRange="location"Q"length"Q} _range;
}

 - (id) resultByAdjustingRangesWithOffset:(q)a;
 - (BOOL) _adjustRangesWithOffset:(q)a;
 - (id) initWithRange:({_NSRange=QQ})a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - ({_NSRange=QQ}) range;
 - (Q) resultType;


@end
