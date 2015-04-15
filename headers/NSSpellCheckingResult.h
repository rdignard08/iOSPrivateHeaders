
@interface NSSpellCheckingResult : NSTextCheckingResult {

    {_NSRange="location"Q"length"Q} _range;
}

 - (id) resultByAdjustingRangesWithOffset:(long long)a;
 - (BOOL) _adjustRangesWithOffset:(long long)a;
 - (id) initWithRange:({_NSRange=QQ})a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - ({_NSRange=QQ}) range;
 - (unsigned long long) resultType;


@end
